#include "main.h"

/**
  * _printf_char - put char to stdout
  * @args: argument
  * Return: number of int put to stdout
  */
int _printf_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
