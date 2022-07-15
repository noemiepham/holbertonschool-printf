#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *_print_binary - print number
 * @list: argument number
 * Return: 1
 */
int _print_binary(va_list list)
{
	int size_number = 0;
	long long int myNumber = va_arg(list, unsigned int);
	int tmp_number = myNumber;
	int *tab = NULL;
	unsigned int dividende = 0;
	unsigned int reste = 0;
	int counter_size_number = 0;

	if (tmp_number == 0)
		_putchar('0'); /* printf condition numero 0 */
	if (tmp_number < 0)
	{
		_putchar('1');
		size_number = 1; /* count signe '-' */
	}
	dividende = _abs(tmp_number);

	tab = malloc(32);  /* array contient les chiffres à afficher*/

	if (tab == NULL)
		return (-1);
	while (dividende > 0)
	{
		reste = dividende % 2;
		tab[counter_size_number] = reste;  /* array number */
		dividende = dividende / 2;
		counter_size_number++; /* count size de number for reverstring */
	}

	while (counter_size_number > 0) /*reverser array de number */
	{
		_putchar(tab[--counter_size_number] + '0');
	}
	free(tab);
	return (size_number);
}
