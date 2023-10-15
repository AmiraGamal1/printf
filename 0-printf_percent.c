#include "main.h"

/**
  * _percent - put % to stdout
  * @args: argument
  * Return: 1
  */
int _percent(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
