#include "main.h"
#include <stdarg.h>
/**
 * _print_char - print char
 * @list : struct function
 * Return: 1 si is faill
*/
int _print_char(va_list list)
{
	int c = 0;

	c = va_arg(list, int);
	_putchar(c);
	return (1);
}
/**
 * _print_string - print string
 * @list : struct function
 * Return: string
 */

int _print_string(va_list list)
{
	int count = 0;
	char *string_Array;

	string_Array = va_arg(list, char *);
	if (string_Array == NULL)
	{
		string_Array = "(NULL)";
	}
	while (string_Array[count] != '\0')
	{
		_putchar(string_Array[count]);
		count++;
	}
		return (count);
}
/**
 * _print_percent - print %
 * @list: stocker dans list
 * Return: write %
 */
int _print_percent(va_list list)
{
	(void)list;
	return (write(1, "%", 1));
}
