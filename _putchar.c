#include "main.h"

/**
  * _putchar - write to the standard output
  * @c: char to print
  * Return: 1 if success, else return -1
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
