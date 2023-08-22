#include "main.h"

/**
  * _putchar - writes the character c to stdout
  * @c: The character to print
  *
  * Return: number of bytes printed
  */
int _putchar(int c)
{
	return (write(1, &c, 1));
}

/**
 * _putstr - writes the string to stdout
 * @str: The string to print
 *
 * Return: number of bytes printed
 */

int _putstr(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		_putchar((int)(*str));
		str++;
		count++;
	}
	return (count);
}
