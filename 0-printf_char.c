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
	char s[1];

	c = va_arg(args, int);
	s[0] = c;
	handle_buffer(buffer, ibuf, s, 1);
	return (1);
}
