#include "main.h"
/**
  * _putnum - writes the character c to stdout
  * @n: number to be printed
  * @base: The base of number to print
  *
  * Return: number of bytes printed
  */
int _putnum(long n, int base)
{
int count;
char *symbols;
symbols = "0123456789abcdef";
if (n < 0)
{
write(1, "-", 1);
return (_putnum(-n, base) + 1);
}
else if (n < base)
{
return (_putchar(symbols[n]));
}
else
{
count = _putnum(n / base, base);
return (count + _putnum(n % base, base));
}
}
