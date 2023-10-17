#include "main.h"
/**
  * print_uhex - convert unsigned int to hex
  * @n: unsigned int
  * Return: count
  */
int print_uhex(unsigned int n)
{
	int d, r;

	if (n / 16)
	{
		d = print_uhex(n / 16);
		r = n % 16;
		if (r > 9)
			r += 7;
		_putchar(r + '0');
		return (d + 1);
	}
	else
	{
		r = n % 16;
		if (r > 9)
			r += 7;
		_putchar(r + '0');
		return (1);
	}
}

/**
  * _printf_uhex - convert unsigned int to hex
  * @args: argument
  * Return: count
  */
int _printf_uhex(va_list args)
{
	unsigned int n;
	int count;

	n = va_arg(args, unsigned int);
	count = print_uhex(n);

	return (count);
}
