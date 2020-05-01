//This Example will provide better understanding of semaphores in action!!

#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <sys/time.h>
#include <unistd.h>

sem_t mutex;
struct timeval start, stop;

void* thread(void* arg){
    sem_wait(&mutex);
    gettimeofday(&start, NULL);
    printf("\nEntered... - %d\n", start.tv_sec);
    sleep(4);
    gettimeofday(&stop, NULL);
    printf("\nExiting... - %d\n", stop.tv_sec);
    sem_post(&mutex);
}

int main(){
    
    sem_init(&mutex,0,1);
    pthread_t t1,t2;
    pthread_create(&t1,NULL,thread,NULL);
    sleep(2);
    pthread_create(&t2,NULL,thread,NULL);
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    sem_destroy(&mutex);
    return 0;
}