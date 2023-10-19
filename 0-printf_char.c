#include "main.h"

/**
  * _printf_char - put char to stdout
  * @args: argument
  * @buffer: buffer
  * @ibuf: index of the buffer
  * Return: number of int put to stdout
  */
int _printf_char(va_list args, char *buffer, int *ibuf)
{
	char c;

	c = va_arg(args, int);
	handle_buffer(buffer, ibuf, c);
	return (1);
}
