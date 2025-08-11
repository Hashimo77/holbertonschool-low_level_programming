#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer representation of the string
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num_started = 0;
	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num_started = 1;
			num = num * 10 + (s[i] - '0');
		}
		else if (num_started)
			break;
		i++;
	}
	return (sign * (int)num);
}





