#include "main.h"
#include <unistd.h>


/**
 * _putchar - writes the ccharacter c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * on error, -1 is returned, and errno is set appropriately
 */

int _putchae(char c)
{
	return (write(1, &c, 1));
}
