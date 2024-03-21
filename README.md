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

### Function prototypes
* int (*get_func(const char *format))(va_list);
* int _putchar(char c);
* int _printf(const char *format, ...);
* int print_str(va_list args);
* int print_char(va_list args);
* int print_pct(va_list args);
* int print_dec(va_list args);

## File description

* my_printf.c: - contains the function _printf()
* _putchar.c: - contains the function _putchar()
* man_3_printf: - manual page for _printf() function.
* get_functions.c - contains the function get_func()
* file_functions.c - contains the functions print_char, print_str and print_pct for the case of printing character, string and '%'
* file_func_dec_int.c - contains the function print_dec for the case of printing decimal and integer
* main.h - contains all headers, prototypes and structure declaration

## Function description

**int _printf(const char *format, ...)**

This function produces output under the control of a format string that specifies how subsequent arguments (or arguments accessed via the variable-length argument of stdarg(3)) are converted for output.

The **format string** is composed of zero or more directives:

1. Ordinary characters that are copied unchanged to the output stream. (except %)
2. Conversion specifications, each of which results in fetching zero or more subsequent arguments. Each conversion specification starts with the character %, ends with a conversion specifier ( which is a letter).

The **conversion specifier**:

The conversion specifier is a letter that specifies the type of conversion to be applied. Our program includes the following conversion specifiers:

**d:**   decimal number to be provided for printing.

**i:**  integer to be provided for printing.

**c:**   character to be provided for printing.

**s:**   ...The const char * argument is expected to be a pointer to an array of character type (pointer to a string).

**%:**  A per cent sign '%' is written. No argument is converted.

**%:**  A per cent sign '%' is written. No argument is converted.


**Return value:**

Upon success, _printfs return the number of characters printed (excluding the null byte used to end output to strings) A negative 1 is returned if an output error is encountered.

___

**int (*get_func(const char *format))(va_list)**

This function called by _printf() and checks for valid conversion specifier when it finds a '%' character. The *get_func function will check for the right conversion specifier. Upon valid specifier, it returns the corresponding function.
___
**int print_char(va_list args)**

This function gets a variadic argument and prints each character of char type.
___

**int print_str(va_list args)**
This function gets a variadic argument, traverse the string, and prints a character at a time.

___
**int print_pct(va_list args)**
This function prints a per cent sign '%'.

___
**int _putchar(char c)**
writes the character c to standard output

## How to use
To use the custom my_printf, include the header file 'my_printf.h' and call the 'my_printf' function with strings and arguments that wants to be printed.
```c
#include "my_printf.h'

int main(void){
my_print("Hello, %s!\n", "world");
return 0;
}
```

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
