#include "main.h"
/**
 * _strlen_recursion - function that prints number of strings
 * @s: This is given
 * Return: 0 if successul exit
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
