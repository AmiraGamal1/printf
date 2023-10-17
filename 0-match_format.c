#include "main.h"

/**
  * _match - match format
  * @format: format
  * Return: pointer to the function
  */
int (*_match(char format))(va_list)
{
	int i = 0;
	match_f m[] = {
		{'c', _printf_char}, {'s', _printf_string},
		{'d', _printf_int}, {'i', _printf_int},
		{'b', _printf_bin}, {-1, NULL}
	};

	while (m[i].c)
	{
		if (format == m[i].c)
			return (m[i].f);
		i++;
	}
	return (NULL);
}
