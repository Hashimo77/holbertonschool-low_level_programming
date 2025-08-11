#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: input string
 *
 * Return: integer value
 */
int _atoi(char *s)
{
    unsigned int result = 0;
    int sign = 1;
    int started = 0;

    while (*s)
    {
        if (*s == '-')
            sign *= -1;
        else if (*s == '+' && !started)
            ;
        else if (*s >= '0' && *s <= '9')
        {
            started = 1;

            if (result > (unsigned int)(2147483647 / 10) ||
                (result == (unsigned int)(2147483647 / 10) && (*s - '0') > 7))
            {
                /* overflow occurred */
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


