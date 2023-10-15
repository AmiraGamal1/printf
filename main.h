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
int _error(int format, int args);
int _percent(va_list args);
int _mismatch(void);
int undef_f(void);


#endif
