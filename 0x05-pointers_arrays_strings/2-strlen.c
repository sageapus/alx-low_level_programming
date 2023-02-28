#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: the string to get the length of
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
