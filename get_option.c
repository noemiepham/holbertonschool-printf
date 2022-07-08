#include "main.h"
<<<<<<< HEAD
=======

>>>>>>> ca4e98235422396f590bb5b4bdc7832122e69da0
/**
 *get_op_func -check - for valid specifier
 *@format : format de argument printf
 *Return: NULL if format is NUll
 */
int (*get_op_func(const char *format))(va_list)
{
	int i;
	func_t p[] = {
<<<<<<< HEAD
	{"c", _print_char},
	{"s", _print_string},
	{"%", _print_percent},
	{NULL, NULL}};
	for (i = 0; p[i].t; i++)
	{
	if (*format == *(p[i].t))
	{
	return (p[i].f);
	}
=======
		{"c", _print_char},
		{"s", _print_string},
		{"%", _print_percent},
		{NULL, NULL}};
	for (i = 0; p[i].t; i++)
	{
		if (*format == *(p[i].t))
		{
			return (p[i].f);
		}
>>>>>>> ca4e98235422396f590bb5b4bdc7832122e69da0
	}
	return (NULL);
}
