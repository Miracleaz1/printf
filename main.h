#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(int c);
int _putstr(char *str);
int _putnum(long n, int base);
int formatter(va_list args, char spec);
int _printf(const char *format, ...);

#endif
