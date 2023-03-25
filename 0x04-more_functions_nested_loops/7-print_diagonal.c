#include "main.h"
/**
 * print_diagonal - draw a diagonal line on parametre
 * @n: the number of times to print diagonal lines
 * Return: empty
 */

int print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < x; y++)
	__putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
}
