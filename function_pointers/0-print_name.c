#include "function_pointers.h"

/**
 * print_name - Bir adı göstərmək üçün funksiya
 * @name: çap olunacaq ad
 * @f: funksiyaya göstərici (adı necə çap edəcəyini müəyyən edir)
 *
 * Return: Heç nə qaytarmır
 */
void print_name(char *name, void (*f)(char *))
{
    if (name == NULL || f == NULL)
        return;

    f(name);
}
