#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: the integer value
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int started = 0;
	int minus_count = 0;

	while (*s)
	{
		if (*s == '-')
			minus_count++;
		else if (*s == '+')
			; /* ignore plus signs */
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			result = result * 10 + (*s - '0');
		}
		else if (started)
			break;
		s++;
	}

	if (minus_count % 2 != 0)
		sign = -1;

	return (sign * result);
}

