#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>
#include <pthread.h>
#include <semaphore.h>

sem_t mutex;
pthread_t tid[100];
struct timeval start, stop;

int count;

void* thread(void*);

int main(){
    int i;
    sem_init(&mutex,0,1);
    for(i=0;i<100;++i){
        pthread_create(&tid[i],NULL,thread,NULL);
    }
    for(i=0;i<100;++i)
        pthread_join(tid[i],NULL);
    sem_destroy(&mutex);
    return 0;
}

void* thread(void* arg){
    sem_wait(&mutex);
    gettimeofday(&start,NULL);
    sleep(1);
    (void)printf("%d - ", count++);
    gettimeofday(&stop,NULL);
    printf("%d - ", (start.tv_sec));
    sem_post(&mutex);
    printf("%d\n", (stop.tv_sec));
    return NULL;
}