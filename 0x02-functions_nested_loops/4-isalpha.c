#include "main.h"


/**
 * _isalpha - checks for alphabetic character
 * @c: The check to be checked
 * Return: 1 for lowercase character or 0 for anything else
 */

int _isalpha(int c)
{
	if (( c >= 65 && c <=90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{ 
		return (0);
	}
}
