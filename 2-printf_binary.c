#include "main.h"

/**
  * print_bin - convert int to bin and print it
  * @n: unsigned int
  * @buffer: buffer
  * @ibuf: index
  * Return: number of bits
  */
int print_bin(unsigned int n, char *buffer, int *ibuf)
{
	int d;

	if (n >> 1)
	{
		d = print_bin(n >> 1, buffer, ibuf);
		handle_buffer(buffer, ibuf, (n & 1) ? '1' : '0');
		return (d + 1);
	}
	else
	{
		handle_buffer(buffer, ibuf, (n & 1) ? '1' : '0');
		return (1);
	}
}

/**
  * _printf_bin - convert unsiged int to binary
  * @args: argument
  * @buffer: buffer
  * @ibuf: index
  * Return: count
  */
int _printf_bin(va_list args, char *buffer, int *ibuf)
{
	int count;
	unsigned int n;

	n = va_arg(args, unsigned int);
	count = print_bin(n, buffer, ibuf);

	return (count);
}
