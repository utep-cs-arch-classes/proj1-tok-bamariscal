#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

#define LIMIT 100

void main(){

  char i;
  char input;

  List *history = init_history();
  Item * temp;
  while(1){
    char arr[LIMIT];
    i =0;
  printf("Enter an input\n");

  for(input; (input = getchar()) != '\n'; arr[LIMIT]++){
    arr[LIMIT] = input;
    putchar(input);
  }

   printf("\n");

  arr[i]= '\0';

  add_history(history,arr);
  printf("\n There is %d words ", count_words(arr));
  char**tokens = tokenize(arr);
  print_tokens(tokens);
  }
  print_history(history);
}
