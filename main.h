#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
* struct func_type - struct de function printf
* @t: chararcter
* @f: pointer to function
*/

typedef struct func_type
{
	char *t;
	int (*f)(va_list);
} func_t;
int (*get_op_func(const char *format))(va_list);
char _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list list);
int _print_string(va_list list);
int _print_percent(va_list list);
int _print_number(va_list list);
unsigned int _abs(int n);

#endif
