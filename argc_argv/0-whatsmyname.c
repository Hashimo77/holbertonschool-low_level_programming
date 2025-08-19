#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
    (void)argc; /* argc istifadə olunmur, ona görə kompilyator xəbərdarlığı üçün */
    printf("%s\n", argv[0]);
    return (0);
}

