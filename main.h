#ifndef FUNC_PROTO_H
#define FUNC_PROTO_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct print - structure to print the functions
 * @t: type of specifier
 * @f: function to print
 * Return: int
 */
typedef struct print
{
	char *t;
	int (*f)(char *format, va_list);
} prt;

int _putchar(char ch);
int _puts(char *string);
int print_c(char *format, va_list pa);
int print_s(char *format, va_list pa);
int (*formatt(char *format))(char *format, va_list);
int _printf(char *format, ...);
int printint(char *format, va_list pa);
int integer(int number);
int contadordigit(int number);
int _abs(int number);
int print_pc(char *format, va_list pa);
int print_x(char *format, va_list);
int print_X(char *format, va_list);
int print_o(char *format, va_list);
int print_u(char *format, va_list);

#endif /* FUNC_PROTO_H */
