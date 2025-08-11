#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;
	int started = 0;

	while (*s)
	{
		if (*s == '-')
		{
			if (!started)
				sign *= -1;
		}
		else if (*s == '+')
		{
			if (!started)
				;
		}
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;

			/* Overflow yoxlaması */
			if (result > (unsigned int)(2147483647 / 10) ||
				(result == (unsigned int)(2147483647 / 10) && (*s - '0') > 7))
			{
				if (sign == 1)
					return (2147483647);
				else
					return (-2147483648);
			}

			result = result * 10 + (*s - '0');
		}
		else if (started)
			break;

		s++;
	}

	return (sign * (int)result);
}



