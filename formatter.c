#include "main.h"

/**
  * formatter - handles printf formatting
  * @args: variadic arguments
  * @spec: specifier of the format
  *
  * Return: nothing
  */

int formatter(va_list args, char spec)
{
	int count;

	count = 0;
	if (spec == 'c')
		count += (_putchar(va_arg(args, int)));
	else if (spec == 's')
		count += (_putstr(va_arg(args, char *)));
	return (count);
}
