# Steps to create and push 0-isupper.c function

## Create 0-isupper.c
```
echo -e '#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}' > 0-isupper.c
```

## Create main.h
```
echo -e '#ifndef MAIN_H
#define MAIN_H

int _isupper(int c);

#endif /* MAIN_H */' > main.h
```

## Give execution permissions
```
chmod +x 0-isupper.c
chmod +x main.h
```

## Git add, commit, push
```
git add 0-isupper.c main.h
git commit -m "Add function that checks for uppercase character"
git push
```
