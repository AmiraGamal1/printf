#include "main.h"

/**
  * print_unint - print num
  * @n: unsigned int
  * Return: count
  */
int print_unint(unsigned int n, char *num, int i)
{
	int d;

	if (n / 10)
	{
		d = print_number(n / 10, num, i + 1);
		num[i] = (n % 10) + '0';
		return (d + 1);
	}
	else
	{
		num[i] = (n % 10) + '0';
		return (1);
	}
}
/**
  * _printf_unint - print unsigned int
  * @args: arguments
  * Return: count
  */
int _printf_unint(va_list args, char *buffer, int *ibuf)
{
	int count;
	unsigned int n;
	char *num;

	n = va_arg(args, unsigned int);
	num = malloc(sizeof(char) * 32);
	if (!num)
		return (-1);
	count = print_unint(n, num, 0);
	rev_string(num, count);
	handle_buffer(buffer, ibuf, num, count);

	free(num);
	return (count);
}
