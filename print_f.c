#include "main.h"
#include <unistd.h> // Include this for the write function
#include <stdarg.h> // Include this for va_list, va_start, va_arg, and va_end

int _printf(const char *format, ...)
{
    int chara_print = 0; // Corrected variable declaration

    va_list list_of_args;

    if (format == NULL)
    {
        return -1;
    }

    va_start(list_of_args, format);

    while (*format)
    {
        if (*format != '%')
        {
            write(1, format, 1);
            chara_print++;
        }
        else
        {
            format++;
            if (*format == '\0')
                break;

            if (*format == '%')
            {
                write(1, format, 1);
                chara_print++;
            }
            else if (*format == 'c')
            {
                char c = va_arg(list_of_args, int);
                write(1, &c, 1);
                chara_print++;
            }
            else if (*format == 's')
            {
                char *str = va_arg(list_of_args, char *);
                int str_len = 0;

                while (str[str_len] != '\0')
                    str_len++;

                write(1, str, str_len);
                chara_print += str_len;
            }
        }

        format++;
    }

    va_end(list_of_args); // Added semicolon

    return chara_print;
}

int main() // Corrected function declaration
{
    _printf("Hello, %s!", "World");
    return 0;
}

