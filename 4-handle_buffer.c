#include "main.h"

/**
  * write_buffer - write n bytes from buffer to stdout
  * @buffer: adderess of the buffer
  * @ibuf: index of the last located buffer
  * Return: success or fail
  */
int write_buffer(char *buffer, int *ibuf)
{
	return (write(1, buffer, *ibuf));
}
/**
  * handle_buffer - handle buffer to prevent overflow
  * @buffer: adderess of the buffer
  * @ibuf: index of the last located buffer
  * @format: format char
  * Return: nothings
  */
void handle_buffer(char *buffer, int *ibuf, char format)
{
	if (format == '\0')
	{
		write_buffer(buffer, ibuf);
		*ibuf = 0;
		return;
	}
	if (*ibuf == BUF_SIZE - 2)
	{
		write_buffer(buffer, ibuf);
		*ibuf = 0;
	}
	buffer[*ibuf] = format;
	*(ibuf) = *(ibuf) + 1;
}
