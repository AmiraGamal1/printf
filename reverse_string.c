#include "main.h"

/**
  * rev_string - reverse string
  * @num: string
  * @count: string length
  * Return: void
  */
void rev_string(char *num, int count)
{
	int j, size;
	char tmp;

	size = count - 1;
	for (j = 0; j < count / 2; j++)
	{
		tmp = num[j];
		num[j] = num[size];
		num[size--] = tmp;
	}
}
