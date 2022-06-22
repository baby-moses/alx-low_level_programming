#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: This is given
 * Return: 0 if successul exit
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
