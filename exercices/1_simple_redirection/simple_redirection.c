#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void shell(){
    system("/bin/bash");
    printf("you’re the master.\n");
    exit(0);

}
 

void exit_binary(){
    printf("No shell for u my dear  :(");
}

int main(int argc, char* argv[]){

    char name[40];
    printf("Your name ?\n> ");
    scanf("%s",&name);  
    exit_binary();

    return 0;

}