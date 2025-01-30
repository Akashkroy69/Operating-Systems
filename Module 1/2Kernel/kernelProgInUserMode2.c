#include <stdio.h>
int main(){
    printf("trying to execute a kernel level instruction in user mode\n");
    asm("cli"); //this tries to disable interrupts (privileged instruction)
    printf("this instruction should not be executed\n");
}