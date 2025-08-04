#include <stdio.h>

/**
 * main - Prints lowercase and uppercase alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	/* Print lowercase */
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';

	/* Print uppercase */
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
