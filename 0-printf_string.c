#include "main.h"

/**
  * _printf_string - put string to stdout
  * @args: argument
  * Return: number of argument puts to stdout
  */
int _printf_string(va_list args)
{
	char *s;
	int count = 0, len = 0;
	char *error = "(nill)";

	s = va_arg(args, char *);
	if (s == NULL)
	{
		while (error[len])
		{
			_putchar(error[len]);
			len++;
		}
		return (len);
	}
	else
	{
		while (s[count])
		{
			_putchar(s[count]);
			count++;
		}
		return (count);
	}
}
