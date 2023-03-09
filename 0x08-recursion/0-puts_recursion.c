#include "main.h"
/**
 * _put_recursion - prints a string followed by a new line.
 *@s: input
 *_puts_recursion(char *s)
 * Return: void.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case */
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
