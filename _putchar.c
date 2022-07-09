#include <unistd.h>

/**
 * _putchar write output to stdout, the standard output stream
 * @c: print character
 * Return: on sucess 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)

{
	return(write(1, &c, 1)); 

#include "main.h"
#include <unistd.h>
/**
* _putchar - print character
* @c : character
* Return: write
*/
char _putchar(char c)
{
	return (write(1, &c, 1));
}
