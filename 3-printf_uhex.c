#include "main.h"
/**
  * print_uhex - convert unsigned int to hex
  * @n: unsigned int
  * Return: count
  */
int print_uhex(unsigned int n, char *num, int i)
{
	int d, r;

	if (n / 16)
	{
		d = print_uhex(n / 16, num, i + 1);
		r = n % 16;
		if (r > 9)
			r += 7;
		num[i] = r + '0';
		return (d + 1);
	}
	else
	{
		r = n % 16;
		if (r > 9)
			r += 7;
		num[i] = r + '0';
		return (1);
	}
}

/**
  * _printf_uhex - convert unsigned int to hex
  * @args: argument
  * Return: count
  */
int _printf_uhex(va_list args, char *buffer, int *ibuf)
{
	unsigned int n;
	int count;
	char *num;

	n = va_arg(args, unsigned int);
	num = malloc(sizeof(char) * 32);
	if (!num)
		return (-1);
	count = print_uhex(n, num, 0);
	rev_string(num, count);
	handle_buffer(buffer, ibuf, num, count);

	free(num);
	return (count);
}
