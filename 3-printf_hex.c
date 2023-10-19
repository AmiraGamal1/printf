#include "main.h"
/**
  * print_hex - convert int to hex
  * @n: int
  * Return: count
  */
int print_hex(unsigned int n, char *num, int i)
{
	int d, r;

	if (n / 16)
	{
		d = print_hex(n / 16, num, i + 1);
		r = n % 16;
		if (r > 9)
			r += 39;
		num[i] = r + '0';
		return (d + 1);
	}
	else
	{
		r = n % 16;
		if (r > 9)
			r += 39;
		num[i] = r + '0';
		return (1);
	}
}
/**
  * _printf_hex - convert to hex
  * @args: arguments
  * Return: count
  */
int _printf_hex(va_list args, char *buffer, int *ibuf)
{
	unsigned int n;
	int count;
	char *num;

	n = va_arg(args, unsigned int);
	num = malloc(sizeof(char) * 32);
	if (!num)
		return (-1);

	count = print_hex(n, num, 0);
	rev_string(num, count);
	handle_buffer(buffer, ibuf, num, count);

	free(num);
	return (count);
}
