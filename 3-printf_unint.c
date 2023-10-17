#include "main.h"

/**
  * print_unint - print num
  * @n: unsigned int
  * Return: count
  */
int print_unint(unsigned int n)
{
	int d;

	if (n / 10)
	{
		d = print_number(n / 10);
		_putchar((n % 10) + '0');
		return (d + 1);
	}
	else
	{
		_putchar((n % 10) + '0');
		return (1);
	}
}
/**
  * _printf_unint - print unsigned int
  * @args: arguments
  * Return: count
  */
int _printf_unint(va_list args)
{
	int count;
	unsigned int n;

	n = va_arg(args, unsigned int);
	count = print_unint(n);

	return (count);
}
