#include <unistd.h>

/**
*_putchar - print putchar character
*
*@val: holds input
*
*Return: always 0 (Success)
*
*/

int _putchar(int val)
{
	return (write (1, &val, 1));
}
