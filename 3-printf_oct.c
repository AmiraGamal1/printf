#include "main.h"

/**
  * print_oct - print unsigned int into the octal
  * @n: unsigned int
  * @buffer: buffer
  * @ibuf: index
  * Return: count
  */
int print_oct(unsigned int n, char *buffer, int *ibuf)
{
	int d;

	if (n / 8)
	{
		d = print_oct(n / 8, buffer, ibuf);
		handle_buffer(buffer, ibuf, n % 8 + '0');
		return (d + 1);
	}
	else
	{
		handle_buffer(buffer, ibuf, n % 8 + '0');
		return (1);
	}
}

/**
  * _printf_oct - print unsigned int into the octal
  * @args: argument
  * @buffer: buffer
  * @ibuf: index
  * Return: count
  */
int _printf_oct(va_list args, char *buffer, int *ibuf)
{
	unsigned int n;
	int count;

	n = va_arg(args, unsigned int);
	count = print_oct(n, buffer, ibuf);

	return (count);
}
