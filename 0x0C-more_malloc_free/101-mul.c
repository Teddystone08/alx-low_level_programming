#include "main.h"
#include <stdlib.h>

/**
 * _print - move a string to left and print string
 * @str: string to move
 * @l: size of string
 * Return: void
 */
void _print(char *str, int l)
{
	int i, j;

	i = j = 0;

	while (i < l)
	{
		if (str[i] != '0')
			j = l;
		if (j || i == l - 1)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	free(str);
}
/**
 * mul - multplies a char with a string and answer in dest
 * @n: char to multiply
 * @num: string to mutiply
 * @num_index: last not NULL index of num
 * @dest:destination of multiplication
 * @dest _index: heihest inde to start addition
 *
 * Return: pointer to dest, or NULLon failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int j, k, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
		mul = (n - '0') * (num[j] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (addrem += mulrem; k > 0 && addrem; k--)
	{
		add = (dest[k] - '0') + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}
/**
 * check_for_digits - checks the arguments to ensure
 * @av: pointer to arguments
 *
 * Return: 0 if didgits, 1 if not
 *
 */
int check_for_digits(char **av)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
		}
	}
	return (0);
}
/**
 * int - initialize a string
 * @str: string to intialze
 * @l: length of strinf
 * @argc: cmdline for argument
 * @argv: argument vactor 
 * Return: void
 */
int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;
	char *a;
	char *t;
	char e[] = "Error\n",

	if (argc != 3 || check_for_digits(argv))
	{
		for (ti = 0; e[ti]; ti++)
			_putchar9e[ti]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (ti == 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	init(a, ln - l);
	for (ti = 12 - l, i = 0;  ti >= 0; ti--, i++)
	{
		t = mul(argv[2][ti], argv[l], l1 - l, a, (ln - 2) - i);
		if (t == NULL)
		{
			for (ti = 0; e[ti]; ti++)
				_putchar(e[ti]);
			free(a);
			exit(98);
		}
	}
	_print(a, ln - l);
	return (0);
}
