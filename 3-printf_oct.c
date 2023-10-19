#include "main.h"

/**
  * print_oct - print unsigned int into the octal
  * @n: unsigned int
  * Return: count
  */
int print_oct(unsigned int n, char *num, int i)
{
	int d;

	if (n / 8)
	{
		d = print_oct(n / 8, num, i + 1);
		num[i] = n % 8 + '0';

		return (d + 1);
	}
	else
	{
		num[i] = n % 8 + '0';
		return (1);
	}
}

/**
  * _printf_oct - print unsigned int into the octal
  * @args: argument
  * Return: count
  */
int _printf_oct(va_list args, char *buffer, int *ibuf)
{
	unsigned int n;
	int count;
	char *num;

	n = va_arg(args, unsigned int);
	num = malloc(sizeof(char) * 32);
	if (!num)
		return (-1);
	count = print_oct(n, num, 0);
	rev_string(num, count);
	handle_buffer(buffer, ibuf, num, count);

	free(num);
	return (count);
}
