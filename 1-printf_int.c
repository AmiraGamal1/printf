#include "main.h"
/**
  * print_number - pritn digit and count the num of digits
  * @n: int
  * Return: number of digits
  */
int print_number(int n, char *num, int i)
{
	unsigned int N, d;

	if (n < 0)
	{
		N = -n;
		num[i] = '-';
	}
	else
		N = n;
	if (N / 10)
	{
		d = print_number(N / 10, num, i + 1);
		num[i] = (N % 10) + '0';
		return (d + 1);
	}
	else
	{
		num[i] = (N % 10) + '0';
		return (1);
	}
}
/**
  * _printf_int - print int
  * @args: argument
  * Return: num of digits if success else -1
  */
int _printf_int(va_list args, char *buffer, int *ibuf)
{
	int n, count;
	char *num;

	num = malloc(sizeof(char) * 32);
	if (!num)
		return (-1);
	n = va_arg(args, int);
	count = print_number(n, num, 0);
	rev_string(num, count);
	if (n < 0)
		count += 1;
	handle_buffer(buffer, ibuf, num, count);	

	free(num);
	return (count);
}
