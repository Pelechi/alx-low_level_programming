#include "main.h"
/**
 * print_line - Draws a straight line according tp parameter
 * @n: The number of lines to draw
 * Return: empty
 */

void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
