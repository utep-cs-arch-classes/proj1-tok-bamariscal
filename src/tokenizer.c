#include "tokenizer.h"


int space_char(char c){//true if c is a tab or space, and not zero

  if(c ==' ' || c == '\t' || c == '\n'){
    return true;
  }
  return false
  
}


int non_space_char(char c){//true if c not tab or space, and not zero
  if(c !=' ' || c != 't' || c != '\n'){
    return true;
  }
  return false;
  
}


char *word_start(char *str){//* to first non-space char in first word in s
  
}


char *word_end(char *str){//* for space cahr after end of word

  
}


int count_words(char *str){//the number of words in s

  
}
