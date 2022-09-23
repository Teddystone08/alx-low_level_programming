#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Description: add a line to code to print 
 * Return: return 98
 *
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	
	p[5] = 98;

	printf("a[2] = %d\n", a[2]);
	return (0);
}



