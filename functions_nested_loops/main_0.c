#include "main.h"

/**
 * test_isalpha - test the _isalpha function
 * Return: void
 */
void test_isalpha(void)
{
	int r;
	int n = 108; /* ASCII for 'l' */

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(n);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
}

int main(void)
{
	test_isalpha();
	return (0);
}
