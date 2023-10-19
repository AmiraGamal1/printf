#include "main.h"
/**
  * print_uhex - convert unsigned int to hex
  * @n: unsigned int
  * @buffer: buffer
  * @ibuf: index
  * Return: count
  */
int print_uhex(unsigned int n, char *buffer, int *ibuf)
{
	int d, r;

	if (n / 16)
	{
		d = print_uhex(n / 16, buffer, ibuf);
		r = n % 16;
		if (r > 9)
			r += 7;
		handle_buffer(buffer, ibuf, r + '0');
		return (d + 1);
	}
	else
	{
		r = n % 16;
		if (r > 9)
			r += 7;
		handle_buffer(buffer, ibuf, r + '0');
		return (1);
	}
}

/**
  * _printf_uhex - convert unsigned int to hex
  * @args: argument
  * @buffer: buffer
  * @ibuf: index
  * Return: count
  */
int _printf_uhex(va_list args, char *buffer, int *ibuf)
{
	unsigned int n;
	int count;

	n = va_arg(args, unsigned int);
	count = print_uhex(n, buffer, ibuf);

	return (count);
}
