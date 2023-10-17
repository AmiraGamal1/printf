#include "main.h"

/**
  * print_bin - convert int to bin and print it
  * @n: unsigned int
  * Return: number of bits
  */
int print_bin(unsigned int n, unsigned int i, char *b)
{
	int d;

	if (n / 2)
	{
		d = print_bin(n / 2, i + 1, b);
		b[i] = (n % 2) + '0';
		return (d + 1);
	}
	else
	{
		b[i] = (n % 2) + '0';
		return (0);
	}
}

/**
  * _printf_bin - convert unsiged int to binary
  * @args: argument
  * Return: count
  */
int _printf_bin(va_list args)
{
	int n, count, i;
	char *b;

	b = malloc(sizeof(char) * (32 + 1));
	n = va_arg(args, int);
	if (n < 0)
	{
		n = -n;
		count = print_bin(n, 0, b);
		i = count;
		while (i >= 0)
		{
			if (b[i] == '0')
				_putchar('1');
			else
				_putchar('0');
			i--;
		}
	}
	else if (n == 0)
	{
		_putchar('0');
		count = 1;
	}
	else
	{
		count = print_bin(n, 0, b);
		i = count;
		while (i >= 0)
		{
			_putchar(b[i]);
			i--;
		}
	}
	free(b);
	return (count);
}
