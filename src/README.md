Project 1: Tokenizer
====================
The tokenizer will take in a string of characters and return an array of pointers to each word. The tokenizer will also keep a history, so that the user can choose from previous inputs strings to tokenize without having to retype the string.

Run Program
---------------	
This project requires mutiple files to run
- gui.c
- history.c
- history.h
- tokenizer.c
- tokenizer.h

### Commands:
**make:** Compiles tokenizer.c, gui.c, and history.c
  - the output is named test

**make clean:** cleans directory from all .o ~ and # files

space_char and non_space_char
---------------	
**space_char**
- returns true if there is a space char

**non_space_char**
- retuns true if there is a non space char

word_start and word_end
---------------	
**word_start**
- find first char in our string. If the first char is not a space then we return a value

**word_end**
- get the last non space char in pointer. Traverse pointer until we find teh at the next index is '\0'

count_words
---------------	
**count_words**
- count the amount of words that are in the pointer
