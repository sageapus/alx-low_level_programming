#include <stdio.h>


/**
 * main - printing alphabets in lowercase
 *
 * Return: Always 0 (success)
 */

int main()
{
	char ch;

	for(ch = 'a'; ch <='z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
