#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

typedef struct format{
	char c;
	int (*f)(va_list, char *, int *);
}match_f;

int _putchar(char c);
int _printf(const char *format, ...);
int _printf_char(va_list args, char *buffer, int *ibuf);
int _printf_string(va_list args, char *buffer, int *ibuf);
int (*_match(char format))(va_list, char *, int *);
int print_number(int n, char *num, int i);
int _printf_int(va_list args, char *buffer, int *ibuf);
int print_bin(unsigned int n, char *num, int i);
int _printf_bin(va_list args, char *buffer, int *ibuf);
int print_unint(unsigned int n, char *num, int i);
int _printf_unint(va_list args, char *buffer, int *ibuf);
int print_hex(unsigned int n, char *num, int i);
int _printf_hex(va_list args, char *buffer, int *ibuf);
int print_uhex(unsigned int n, char *num, int i);
int _printf_uhex(va_list args, char *buffer, int *ibuf);
int print_oct(unsigned int, char *num, int i);
int _printf_oct(va_list args, char *buffer, int *ibuf);
void handle_buffer(char *buffer, int *ibuf, char *format, int count);
int write_buffer(char *buffer, int *ibuf);
void rev_string(char *num, int count);

#endif
