#include <stdio.h>
#include "main.h"
#include <limits.h>

int main(void)
{
    	int len;
    	int len2;
	unsigned int ui;

	ui = (unsigned int)INT_MAX + 1024;
	len = _printf("Let's try to printf a simple sentence.\n");
    	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("%d, %d\n", len, len2);
   	_printf("Character:[%c]\n", 'H');
   	printf("Character:[%c]\n", 'H');
   	_printf("String:[%s]\n", "I am a string !");
    	printf("String:[%s]\n", "I am a string !");
	printf("%d\n", len);
	_printf("", 'a');
	_printf("%", 'a');
    	_printf("Length:[%d, %i]\n", len, len);
    	printf("Length:[%d, %i]\n", len2, len2);
    	_printf("Negative:[%d]\n", -762534);
    	printf("Negative:[%d]\n", -762534);
	len = _printf("%b\n", 98);
	printf("%d\n", len);
 	_printf("Unsigned:[%u]\n", ui);
    	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	return (0);
}
