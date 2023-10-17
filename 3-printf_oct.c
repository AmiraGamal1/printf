#include "main.h"

/**
  * print_oct - print unsigned int into the octal
  * @n: unsigned int
  * Return: count
  */
int print_oct(unsigned int n)
{
	int d;

	if (n / 8)
	{
		d = print_oct(n / 8);
		_putchar(n % 8 + '0');

		return (d + 1);
	}
	else
	{
		_putchar(n % 8 + '0');
		return (1);
	}
}

/**
  * print_oct - print unsigned int into the octal
  * @n: unsigned int
  * Return: count
  */
int _printf_oct(va_list args)
{
	unsigned int n;
	int count;

	n = va_arg(args, unsigned int);
	count = print_oct(n);

	return (count);
}
