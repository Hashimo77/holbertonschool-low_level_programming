#include "main.h"

/**
 * test_islower - tests the _islower function
 * Return: void
 */
void test_islower(void)
{
	int r;
	int n = 108; /* ASCII for 'l' */

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(n);
	_putchar(r + '0');
	_putchar('\n');
}

int main(void)
{
	test_islower();
	return (0);
}
