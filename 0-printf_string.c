#include "main.h"

/**
  * _printf_string - put string to stdout
  * @args: argument
  * Return: number of argument puts to stdout
  */
int _printf_string(va_list args, char *buffer,int *ibuf)
{
	char *s;
	int count = 0, len = 0;
	char *error = "(null)", *str;

	s = va_arg(args, char *);
	/* count string length */
	while (s && s[len])
		len++;
	if (s == NULL)
	{
		str = malloc(sizeof(char) * 6);
		if (!str)
			return (-1);
		while (count < 6)
		{
			str[count] = error[count];
			count++;
		}
	}
	else
	{
		str = malloc(sizeof(char) * len);
		if (!str)
			return (-1);
		while (s[count])
		{
			str[count] = s[count];
			count++;
		}
	}
	handle_buffer(buffer, ibuf, str, count);
	free(str);

	return (count);
}
