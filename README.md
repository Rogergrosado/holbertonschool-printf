# holbertonschool-printf

# Who knew printf() could be implemented ?

This repository contains C program for **_printf()** function written as part of the **Low-level programming and Algorithm** project at **Holberton School**. The program is the implementation of C language function printf() which prints the formatted output.


## Project overview

All files will be compiled with gcc 9.4.0 using the flags: -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

```c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

### Betty coding style:

All files are written in C and follows the Betty coding style for Holberton School. For more detail, check this page:

[Betty style documentation](https://github.com/holbertonschool/Betty/wiki)



Myprintf is a function created that serves as simulation for the printf function.

### Authorized functions and macros
* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)
* _putchar(char c)


## Features

### Libraries
* <stdarg.h>
* <stdio.h>
* <unistd.h>
* <stdlib.h>
* <limits.h>
* <string.h>

## How to use
To use the custom my_printf, include the header file 'my_printf.h' and call the 'my_printf' function with strings and arguments that wants to be printed.

#include "my_printf.h'

int main(void){
my_print("Hello, %s!\n", "world");
return 0;
}


## Implementation Details
The printf function is implemeted in the file 'my_printf.c'. It makes usage of the header 'stdarg.h'to handle variadic arguments. This function parses the format string, identifies formating specifiers, then prints the corresponding arguments.

## Examples

```c
my_printf("Character: &c\n") 'A');
my_printf("String: %s\n", "Hello");
my_printf("Intenger: %d\n", 42);
my_printf("Percentage sign: %%\n);
```

## Contributors
Roger Rosado
Danielys Carrasquillo

# License
This project is under the license MIT License.
