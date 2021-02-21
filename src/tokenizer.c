#include "tokenizer.h"


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
  while(non_space_char(*str) || space_char(*str)){
      str++;
    }
  return str;
}


char *word_end(char *str){//* for space char after end of word
  if(space_char(*str)){
    str = word_start(str);
  }

  while(non_space_char(*str)){
    str++;
  }
  return str;
}


int count_words(char *str){//the number of words in s
  int count =0;

  while (*str != '\0'){
    if(space_char(*str))
      count++;
    
    str++;
  }
  return count;
}
  

