//this code will only work with threads

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(){
    int pid;
    pid = fork();
    srand(pid);
    if(pid < 0){
        perror("fork"); exit(1);
    }else if(pid){
        char* s = "abcdefgh";
        int l = strlen(s);
        for(int i=0;i<l;++i){
            putchar(s[i]);
            fflush(stdout);
            sleep(rand()%2);
            putchar(s[i]);
            fflush(stdout);
            sleep(rand() % 2);
        }
    }else{
        char *s = "ABCDEFGH";
        int l = strlen(s);
        for (int i = 0; i < l; ++i)
        {
            putchar(s[i]);
            fflush(stdout);
            sleep(rand() % 2);
            putchar(s[i]);
            fflush(stdout);
            sleep(rand() % 2);
        }
    }
}
