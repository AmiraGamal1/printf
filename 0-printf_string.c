#include "main.h"

/**
  * _printf_string - put string to stdout
  * @args: argument
  * Return: number of argument puts to stdout
  */
int _printf_string(va_list args)
{
	char *s;
	int count = 0;

	s = va_arg(args, char *);
	while (s[count])
	{
		_putchar(s[count]);
		count++;
	}

	return (count);
}
