#include "main.h"
#include <stdio.h>

/**
 * _abs - print out the absolute value of number
 * @n: number
 * Return: int absolute value
 * https://stackoverflow.com/questions/22268815/absolute-value-of-int-min
 */

unsigned int _abs(int n)
{
	unsigned int res = (n < 0) ? -((unsigned int)n) : (unsigned int)n;

	return (res);
}
