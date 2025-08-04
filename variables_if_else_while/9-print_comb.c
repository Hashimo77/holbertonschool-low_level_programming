#include <stdio.h>

/**
 * main - Prints all single-digit number combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + 48);
		if (num != 9)
		{
			putchar(44);
			putchar(32);
		}
		num++;
	}
	putchar('\n');

	return (0);
}
