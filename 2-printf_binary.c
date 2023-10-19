#include "main.h"

/**
  * print_bin - convert int to bin and print it
  * @n: unsigned int
  * Return: number of bits
  */
int print_bin(unsigned int n, char *num, int i)
{
	int d;

	if (n >> 1)
	{
		d = print_bin(n >> 1, num, i + 1);
		num[i] = (n & 1) ? '1' : '0';
		return (d + 1);
	}
	else
	{
		num[i] = (n & 1) ? '1' : '0';
		return (1);
	}
}

/**
  * _printf_bin - convert unsiged int to binary
  * @args: argument
  * Return: count
  */
int _printf_bin(va_list args, char *buffer, int *ibuf)
{
	int count;
	unsigned int n;
	char *num;

	n = va_arg(args, unsigned int);
	num = malloc(sizeof(char) * 65);
	if (!num)
		return (-1);	
	count = print_bin(n, num, 0);
	rev_string(num, count);
	handle_buffer(buffer, ibuf, num, count);

	free(num);
	return (count);
}
