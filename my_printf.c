#include "main.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char *str;
	char ch;

	va_start(args, format);

	while (*format != '\0') {
		if (*format == '%') {
			format++;
			switch (*format) {
				case 'c':
					ch = va_arg(args, int);
					putchar(ch);
					count++;
					break;
				case 's':
					str = va_arg(args, char*);
					while (*str) {
						putchar(*str);
						count++;
						str++;
					}
					break;
				case '%':
					putchar('%');
					count++;
					break;
				default:
					putchar('%');
					putchar(*format);
					count += 2;
					break;
			}
		} else {
			putchar(*format);
			count++;
		}
		format++;
	}

	va_end(args);
	return count;
}

