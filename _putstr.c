#include "main.h"

/**
  * _putstr - writes the string to stdout
  * @s: The string to print
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
