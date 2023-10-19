
#include "main.h"
/**
  * _printf - formmated print to stdout
  * @format: string of ordinary char and formats
  * Return: number of char write to stdout (success) , -1 if fail
  */
int _printf(const char *format, ...)
{
	va_list args;
	int counter = 0, j = 0, ind = 0;
	int *ibuf = &ind;
	int (*function)(va_list, char *, int *);
	char c[1];
	char buffer[BUF_SIZE];

	buffer[BUF_SIZE - 1] = '\0';
	va_start(args, format);
	if (format == NULL || (format[j] == '%' && !format[j + 1]))
		return (-1);
	while (format[j] != '\0')
	{
		if (format[j] == '%')
		{
			/* look for the specifier */
			j++;
			if (format[j] == '\0')
				return (-1);
			else if (format[j] == '%')
			{
				c[0] = format[j];
				handle_buffer(buffer, ibuf, c, 1);
				counter++;
			}
			else
			{
				function = _match(format[j]);
				if (function)
					counter += function(args, buffer, ibuf);
			}
		}
		else
		{
			c[0] = format[j];
			handle_buffer(buffer, ibuf, c, 1);
			counter++;
		}
		j++;
	}
	c[0] = format[j];
	handle_buffer(buffer, ibuf, c, 1);
	va_end(args);
	return (counter);
}
