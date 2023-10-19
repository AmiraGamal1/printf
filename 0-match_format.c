#include "main.h"

/**
  * _match - match format
  * @format: format
  * Return: pointer to the function
  */
int (*_match(char format))(va_list, char *, int *)
{
	int i = 0;
	match_f m[] = {
		{'c', _printf_char}, {'s', _printf_string},
		{'d', _printf_int}, {'i', _printf_int},
		{'b', _printf_bin}, {'u', _printf_unint},
		{'o', _printf_oct}, {'x', _printf_hex},
		{'X', _printf_uhex}, {-1, NULL}
	};

	while (m[i].c)
	{
		if (format == m[i].c)
			return (m[i].f);
		i++;
	}
	/* i need to handle what to do if the format not find */
	return (NULL);
}
