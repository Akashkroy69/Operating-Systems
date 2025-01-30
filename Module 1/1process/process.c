#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>


int main(){

    pid_t pid;
    pid = fork();
    if(pid < 0){
        printf("Error\n");
        exit(1);
    }else if(pid == 0){
        printf("Child process\n pid: %d\n", getpid());
    }else{
        printf("Parent process\n pid: %d\n", getpid());
    }
}