#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - print if number is zero, positive_ or_ negaive
*Description: using the main function
*print variable n is zero, positive_ or_ negaive.
*
* Return: Always 0 (Success)
*/
int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* code goes there */

	if (n > 0){
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	return (0);
}
