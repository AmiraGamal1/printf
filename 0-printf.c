#include "main.h"
/**
  * _printf - formmated print to stdout
  * @format: string of ordinary char and formats
  * Return: number of char write to stdout (success) , -1 if fail
  */
int _printf(const char *format, ...)
{
	va_list args;
	int counter = 0, i, num_sp;
	match_f m[] = {
		{'c', _printf_char}, {'s', _printf_string},
	};

	num_sp = sizeof(m) / sizeof(match_f);
	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			/* look for the specifier */
			format++;
			if (*format == '%')
			{
				_putchar('%');
				counter++;
			}
			else
			{	i = 0;
				while (*format != m[i].c && i < num_sp)
					i++;
				if (*format == m[i].c)
					counter += m[i].f(args);
			}
		}
		else
		{
			_putchar(*format);
			counter++;
		}
		format++;
	}
	va_end(args);
	return (counter);
}
