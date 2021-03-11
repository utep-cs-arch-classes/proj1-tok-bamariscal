#include "tokenizer.h"
#include <stdio.h>
#include <stdlib.h>

int space_char(char c){//true if c is a tab or space, and not zero
  if(c ==' ' || c == '\t' || c == '\n'){
    return 1;
  }
  return 0;
  
}


int non_space_char(char c){//true if c not tab or space, and not zero
  if(c !=' ' || c != 't' || c != '\n'){
    return 1;
  }
  return 0;
  
}


char *word_start(char *str){//* to first non-space char in first word in s
  while(space_char(*str)){
      str++;
    }
  return str;
}


char *word_end(char *str){//* for space char after end of word
  str = word_start(str);
  int num =0;

  while(non_space_char(*str)){
    str++;
    num++;
  }
  return str;
}


int count_words(char *str){//the number of words in s

  int count = 0;
  
  while(*str != '\0'){
    str = word_end(str);
    count++;
  }
  printf("There is %d words in the input", count);
  return count;
}


char *copy_str(char *inStr, short len){//returns allocated new zero-terminated string

  char *p = malloc(sizeof(char) * (len+1));

  int i  = 0;

  while(i<len){
    p[i] = inStr[i];
    i++;
  }

  p[i] = '\0';
  return p;
}

char **tokenize(char *str){//returns allocated new zero-terminated vector  of allocated space-separated toekns form zero-terminated str

  int count = count_words(str);
  char **t = (char**)malloc((count+1)*sizeof(char*));
  char *s, *e;
  int length =0;

  s = word_start(str);
  int read = 0;
  while(count_words(str)>=read){
    e = word_end(s);
    length = e-s;
    t[read] =copy_str(s,length);
    s = word_start(e);

    if(read==count_words(str)){
      t[read] = "\0";
    }
    read++;
  }
  return t;
}

void print_tokens(char **tokens){//print tokens

  for(int i=0; tokens[i] != "\0";i++){
    printf("Tokens: %s \n", tokens[i]);

}
}

void free_tokens(char **tokens){//free tokens and vectors

  free(tokens);
  tokens = NULL;

}
  

