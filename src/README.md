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

tokenizer.c
====================

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

copy_str
---------------
**copy_str**
- copy a pointer into a new pointer in order to know how many chars to copy based on input integer

tokenize
---------------
**tokenize**
- allocate new memory for double pointer using count_words. Using the word_start and and stop at word_end

fee_tokens
---------------
**free_tokens**
- Free all tokens allocated in double pointer using free method


history.c
====================

init_history
---------------	
**init_history**
- create an empty list then allocate space for it. Same thing for Item


add_history
---------------
**add_history**
- add data into list. Check if list is not empty, if its empty then,
- populate list


get_history
---------------
**get_history**
- return specific node data(Ex: Hello world) index 0 is hello

print_history
---------------
**print_history**
- print content of each node as long as its not NULL


free_history
---------------
**free_history**
- same as free token
