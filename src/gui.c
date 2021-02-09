#include <stdio.h>

void main(){
  char input;
  int i=0;
  char arr[i];

  printf("enter any value\n");

  for(input; (input = getchar()) != '\n'; i++){
    arr[i] = input;
    putchar(input);
  }

  printf("\n");
}
