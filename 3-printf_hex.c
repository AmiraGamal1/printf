#include "main.h"
/**
  * print_hex - convert int to hex
  * @n: int
  * @buffer: buffer
  * @ibuf: index
  * Return: count
  */
int print_hex(unsigned int n, char *buffer, int *ibuf)
{
	int d, r;

	if (n / 16)
	{
		d = print_hex(n / 16, buffer, ibuf);
		r = n % 16;
		if (r > 9)
			r += 39;
		handle_buffer(buffer, ibuf, r + '0');
		return (d + 1);
	}
	else
	{
		r = n % 16;
		if (r > 9)
			r += 39;
		handle_buffer(buffer, ibuf, r + '0');
		return (1);
	}
}
/**
  * _printf_hex - convert to hex
  * @args: arguments
  * @buffer: buffer
  * @ibuf: index
  * Return: count
  */
int _printf_hex(va_list args, char *buffer, int *ibuf)
{
	unsigned int n;
	int count;

	n = va_arg(args, unsigned int);
	count = print_hex(n, buffer, ibuf);

	return (count);
}
