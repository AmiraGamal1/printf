#include "main.h"

/**
  * print_unint - print num
  * @n: unsigned in
  * @buffer: buffer
  * @ibuf: indext
  * Return: count
  */
int print_unint(unsigned int n, char *buffer, int *ibuf)
{
	int d;

	if (n / 10)
	{
		d = print_number(n / 10, buffer, ibuf);
		handle_buffer(buffer, ibuf, (n % 10) + '0');
		return (d + 1);
	}
	else
	{
		handle_buffer(buffer, ibuf, (n % 10) + '0');
		return (1);
	}
}
/**
  * _printf_unint - print unsigned int
  * @args: arguments
  * @buffer: buffer
  * @ibuf: indext
  * Return: count
  */
int _printf_unint(va_list args, char *buffer, int *ibuf)
{
	int count;
	unsigned int n;

	n = va_arg(args, unsigned int);
	count = print_unint(n, buffer, ibuf);

	return (count);
}
