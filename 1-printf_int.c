#include "main.h"
/**
  * print_number - pritn digit and count the num of digits
  * @n: int
  * @buffer: buffer
  * @ibuf: index
  * Return: number of digits
  */
int print_number(int n, char *buffer, int *ibuf)
{
	unsigned int N, d;

	if (n < 0)
	{
		N = -n;
		handle_buffer(buffer, ibuf, '-');
	}
	else
		N = n;
	if (N / 10)
	{
		d = print_number(N / 10, buffer, ibuf);
		handle_buffer(buffer, ibuf, (N % 10) + '0');
		return (d + 1);
	}
	else
	{
		handle_buffer(buffer, ibuf, (N % 10) + '0');
		return (1);
	}
}
/**
  * _printf_int - print int
  * @args: argument
  * @buffer: buffer
  * @ibuf: index
  * Return: num of digits if success else -1
  */
int _printf_int(va_list args, char *buffer, int *ibuf)
{
	int n, count;

	n = va_arg(args, int);
	count = print_number(n, buffer, ibuf);
	if (n < 0)
		count += 1;

	return (count);
}
