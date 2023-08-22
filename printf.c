#include "main.h"
/**
 *  _printf - prints formated output
 *  @format: format of string to be taken
 *  Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int count;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format != '%')
		{
			_putchar(*format);
			count++;
		}
		else
		{
			format++;
			if (*format == '%')
			{
				_putchar(*format);
				count++;
			}
			formatter(args, *format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
