// Q2. Write a program to create process and print process id. 


#include <stdio.h> 
#include <unistd.h>
int main() 
{
    int pid; 
    pid=fork(); 
    printf("CSIT 4th semester\n"); 
    if(pid==0) 
        printf("Child process and pid =%d\n",getpid()); 
    else 
        printf("Parent process and pid =%d\n",getpid()); 
} 