#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Last digit of a variable
* 
* Description:This program is to print the last digit 
* of the number stored in the variable n
*
* Return: always 0 (Success)
*/
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* code here */
	l = n % 10;

	if (l > 5)
	{
		printf("last digit of %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, l);
	}
	else 
	{
		printf("last digit of %d is %d and less than 6 and not 0\n", n, l);
	}

}
