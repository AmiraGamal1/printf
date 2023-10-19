#include "main.h"

/**
  * write_buffer - write n bytes from buffer to stdout
  * @buffer: adderess of the buffer
  * @ibuf: index of the last located buffer
  * @format: format char
  * Return: success or fail
  */
int write_buffer(char *buffer, int *ibuf)
{
	return (write(1, buffer, *ibuf + 1));
}
/**
  * handle_buffer - handle buffer to prevent overflow
  * @buffer: adderess of the buffer
  * @ibuf: index of the last located buffer
  * @format: format char
  * Return: nothings
  */
void handle_buffer(char *buffer, int *ibuf, char *format, int count)
{
	int i = 0;

	if (*format == '\0')
	{
		write_buffer(buffer, ibuf);
		*ibuf = 0;
		return;
	}
	while (format[i] && i < count)
	{
		/* flush the buffer if it is full or encounter \n */
		if (*ibuf >= BUF_SIZE - 2)
		{
			write_buffer(buffer, ibuf);
			*ibuf = 0;
		}
		else
		{
			buffer[*ibuf] = format[i];
			*(ibuf) = *(ibuf) + 1;
			i++;
		}
	}
}
