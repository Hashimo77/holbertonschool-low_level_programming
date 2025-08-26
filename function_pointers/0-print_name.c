#include <stddef.h>
#include "main.h"

/**
 * print_name - Verilən adı çap edir
 * @name: çap olunacaq ad
 * @f: funksiyaya göstərici (adı necə çap etməyi göstərir)
 *
 * Return: Heç nə qaytarmır
 */
void print_name(char *name, void (*f)(char *))
{
    if (name == NULL || f == NULL)
        return;

    f(name);
}
