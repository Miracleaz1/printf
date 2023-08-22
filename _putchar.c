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
