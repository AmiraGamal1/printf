#include "main.h"
/**
  * _printf - formmated print to stdout
  * @format: string of ordinary char and formats
  * Return: number of char write to stdout (success) , -1 if fail
  */
int _printf(const char *format, ...)
{
	va_list args;
	int counter = 0, j = 0;
	int (*function)(va_list);

	va_start(args, format);
	if (format == NULL || (format[j] == '%' && !format[j]))
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
				_putchar('%');
				counter++;
			}
			else
			{
				function = _match(format[j]);
				if (function)
					counter += function(args);
				else
					return (-1);
			}
		}
		else
		{
			_putchar(format[j]);
			counter++;
		}
		j++;
	}
	va_end(args);
	return (counter);
}
