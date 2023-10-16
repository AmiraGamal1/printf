#include "main.h"

/**
  * undef_f - print undefinded format
  * Return: -1
  */
int undef_f(void)
{
	char *error = "Undefinded format";
	int i = 0;

	while (error[i])
	{
		_putchar(error[i]);
		i++;
	}
	return (i);
}
