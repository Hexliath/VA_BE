#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void exploit_me(char* arg) {
  char buf[50];

  printf("Variables:\n");
  printf("\tbuf size is 50 \n");
  printf("\targ size is %d \n\n", strlen(arg));

  printf("Code:\n");
  printf("strcpy(buf,arg)\n\n");
  strcpy(buf, arg);
}

int main(int argc, char* argv[]) {
  printf("Super-Buffer 3000\n\n");
  if (argc < 2) {
    printf("Usage: ./demo.exe  <your_buffer>\n");
    return 1;
  }

  exploit_me(argv[1]);
  return 0;
}