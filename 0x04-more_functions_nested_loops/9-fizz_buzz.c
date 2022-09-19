#include <stdio.h>
#include "main.h"

/**
 * main - print fizzBuzz fr
 *
 * Description: prin FizzBuz for multiple numbers
 * Return: void
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			prinf("fizzBuzz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0)
		{
			printf("fizz")
		}
		else
		{
			printf("%1", n);
		}

		if (n < 100)
		{
			printf(" ");
		}
		else
		{
			prinf("\n");
		}
	}
	return (0);
}


