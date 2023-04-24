<div align="center">

  <img src="img/GET_NEXT_LINE.png" alt="logo" width="1000" height="auto" />
 
 <p>
  
 Programming a function that returns one line at a time read from a file descriptor.
  </p>
  
</div>


# About the project

A project made in accordance with the get_next_line project which is part of the Codam Core Curriculum. The goal is to write a function get_next_line(), which takes a file descriptor as an argument and reads the corresponding file one line at a time. The function returns the line read.

# Getting started

Start by cloning the repository:
```c
https://github.com/fkoolhoven/get_next_line.git
```

# Usage

To use the function in your code, simply include the header:
```c
#include "get_next_line.h"
```
and add the .c files when you're compiling. Lastly, define a buffer size. For example:
```c
gcc main.c get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=10
```

# Important learnings
1. Learned to use static variables.
2. Became familiar with opening and reading files in C.
3. Deepened my knowledge of memory allocation and preventing/eliminating leaks.

# Contact

See my profile page for ways to contact me!
