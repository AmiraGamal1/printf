#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct format{
	char c;
	int (*f)();
}match_f;

int _putchar(char c);
int _printf(const char *format, ...);
int _printf_char(va_list args);
int _printf_string(va_list args);
int (*_match(char format))(va_list);
int print_number(int n);
int _printf_int(va_list args);
int print_bin(unsigned int n, unsigned int i, char *b);
int _printf_bin(va_list args);

#endif
