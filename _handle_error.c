#include "main.h"

/**
  * undef_f - print undefinded format
  * Return: -1
  */
int undef_f(void)
{
	char *error = "Undefinded format";
	
	while (*error)
	{
		_putchar(*error);
		error++;
	}
	return (-1);
}
/**
  * _error - check if the number of arg == number of format
  * @format: number of format
  * @args: number of arguments
  * Return: nothings
  */
int _error(int format, int args)
{
	char *less = "Erorr, number of format is greater than arguments";
	if (format > args)
	{
		while (*less)
		{
			_putchar(*less);
			less++;
		}
	}
	return (-1);
}
/**
  * _mismatch - mismatch type
  * Return: -1
  */
int _mismatch()
{
	char *s = "Mismatch format with argument data type";

	while (*s)
	{
		_putchar(*s);
		s++;
	}
	return (-1);
}
