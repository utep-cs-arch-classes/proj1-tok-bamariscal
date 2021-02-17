#include <stdio.h>

#define LIMIT 100

void main(){
  char input;
  char arr[LIMIT];

  printf("enter any value\n");

  for(input; (input = getchar()) != '\n'; arr[LIMIT]++){
    arr[LIMIT] = input;
    putchar(input);
  }

  printf("\n");
}
