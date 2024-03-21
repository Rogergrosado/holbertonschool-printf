# My Printf

## Overview

Myprintf is a function created that serves as simulation for the printf function.

## Features
*Support for formatting specifiers: %c, %s, %d, %i, %%.
*Variadic arguments handling using stdarg.h

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

---

## Contributors
Roger Rosado
Danielys Carrasquillo

# License
This project is under the license MIT License.
