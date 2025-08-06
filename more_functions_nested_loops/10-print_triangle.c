#include "main.h"

/**
 * print_triangle - prints a triangle of size 'size' using '#'
 * @size: size of the triangle
 *
 * You can only use _putchar function to print
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		/* print spaces */
		for (j = size - i; j > 0; j--)
			_putchar(' ');
		/* print hashes */
		for (j = 0; j < i; j++)
			_putchar('#');
		_putchar('\n');
	}
}
