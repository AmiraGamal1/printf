#include "main.h"

/**
  * print_bin - convert int to bin and print it
  * @n: unsigned int
  * Return: number of bits
  */
int print_bin(unsigned int n)
{
	int d;

	if (n / 2)
	{
		d = print_bin(n / 2);
		_putchar((n % 2) + '0');
		return (d + 1);
	}
	else
	{
		_putchar((n % 2) + '0');
		return (0);
	}
}

/**
  * _printf_bin - convert unsiged int to binary
  * @args: argument
  * Return: count
  */
int _printf_bin(va_list args)
{
	int n, count;

	n = va_arg(args, int);
	if (n < 0)
		return (0);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	count = print_bin(n);
	return (count);
}
