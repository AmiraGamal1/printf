#include "main.h"
/**
  * print_number - pritn digit and count the num of digits
  * @n: int
  * Return: number of digits
  */
int print_number(int n)
{
	unsigned int N, d;

	if (n < 0)
	{
		N = -n;
		_putchar('-');
	}
	else
		N = n;
	if (N / 10)
	{
		d = print_number(N / 10);
		_putchar((N % 10) + '0');
		return (d + 1);
	}
	else
	{
		_putchar((N % 10) + '0');
		return (1);
	}
}
/**
  * _printf_int - print int
  * @args: argument
  * Return: num of digits if success else -1
  */
int _printf_int(va_list args)
{
	int n, count;

	n = va_arg(args, int);
	count = print_number(n);
	if (n < 0)
		count += 1;
	return (count);
}
