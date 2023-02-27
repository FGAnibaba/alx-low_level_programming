#include "main.h"
/**
 * _strlen(char *s) a function that returns the length of a string.
 * @s: char to check
 * Return: 0
 */

int _strlen(char *s);
{
	int a = 0; //a function that returns the length of a string.
	for(; *s++;)
		*a++;
	return (a);
}
