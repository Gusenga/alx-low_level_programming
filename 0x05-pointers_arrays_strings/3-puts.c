#include "main.h"

/**
 * _puts - prints a string
 * @str: a pointer to an int that will be changed
 *
 * Return: void which means our answer is correct
 */

void _puts(char *str)
{
char *c;
int m;

c = str;

for (n = 0; c[n]; n++)
{
_putchar (c[n]);
}
_putchar('\n');
}
