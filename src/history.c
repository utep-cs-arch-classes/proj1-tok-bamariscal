#include "history.h"
#include <stdio.h>
#include <stdlib.h>

List *init_history(){

  List *history = (List*) malloc(sizeof(List));
  history -> root = (Item*)malloc(sizeof(Item));
  history -> root -> id = -1;
  return history;
   
}

void add_history(List *list, char *str){

  int count = 0;
  Item *current = list ->root;
  while(current ->id !=-1){
    current = current -> next;
    count++;
  }
  current -> id = count;
  current -> str = str;
  current -> next = (Item*)malloc(sizeof(Item));
  current -> next -> id = -1;
  
}

char *get_history(List *list, int id){

  Item *current = list -> root;
  while(current -> id != id){
    current = current ->next;
  }
  return current -> str;

}


void print_history(List *list){

  Item current = *(list->root);
  while(current.next != NULL){
    printf("%s \n", current.str);
    current = *(current.next);
  }
}

void free_history(List * list){
  Item *current = list-> root;
  Item *next;
  while(current != NULL){
    next = current ->next;
    free(current ->str);
    free(current);
    current = next;
  }
}

