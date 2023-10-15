#include "main.h"
/**
  * _printf - formmated print to stdout
  * @format: string of ordinary char and formats
  * Return: number of char write to stdout (success) , -1 if fail
  */
int _printf(const char *format, ...)
{
	va_list args;
	/* counter : number of char write to stdout */
	/* f_count: num of conversion specifiers */
	/* arg_count: number of arg passed(success) -1 (fail) */
	unsigned int counter = 0, i;

	match_f m[] = {
		{'c', _printf_char}, {'s', _printf_string},
		{'%', _percent}
	};
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			/* match format with function */
			while (*format != m[i].c && i < 3)
			{
				i++;
			}
			if (*format == m[i].c)
			{
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
	/* flash va */
	va_end(args);
	return (counter);
}
