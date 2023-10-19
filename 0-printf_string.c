#include "main.h"

/**
  * _printf_string - put string to stdout
  * @args: argument
  * @buffer: buffer
  * @ibuf: index
  * Return: number of argument puts to stdout
  */
int _printf_string(va_list args, char *buffer, int *ibuf)
{
	char *s;
	int count = 0;
	char *error = "(null)";

	s = va_arg(args, char *);
	if (s == NULL)
	{
		while (count < 6)
		{
			handle_buffer(buffer, ibuf, error[count]);
			count++;
		}
	}
	else
	{
		while (s[count])
		{
			handle_buffer(buffer, ibuf, s[count]);
			count++;
		}
	}
	return (count);
}
