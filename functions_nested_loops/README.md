# 0x04. C - More functions, more nested loops

## 0-isupper.c

This file contains a function that checks for uppercase characters.

### Function Prototype
`int _isupper(int c);`

### Description
Returns 1 if `c` is uppercase
Returns 0 otherwise

### Compilation
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
```

### Example Usage
```bash
./0-isuper
A: 1
a: 0
```
