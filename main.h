#ifndef FUNC_PROTO_H
#define FUNC_PROTO_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print - a structure for printing types of specifiers
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} prt;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list c); /* single character */
int print_s(va_list s); /* string */
int print_i(va_list i); /* integer, detects base automatically */
int print_d(va_list d); /* assumes integer is in base 10 */
int print_f(va_list f); /* floating point numbers */
int print_e(va_list e); /* floating point in scientific form */
int print_g(va_list g); /* floating point in scientific form */
int print_l(va_list l); /* long */
int print_0(va_list zero);
int print_h(va_list h);
int print_u(va_list u); /* unsigned int */
int print_b(va_list b); /* binary format */
int print_o(va_list o); /* octal notation */
int print_x(va_list x); /* unsigned hexadecimal */
int print_X(va_list X); /* unsigned hexadecimal */
int print_p(va_list p); /* pointer - address printing */
int print_S(va_list S); 
int print_r(va_list r); /* unknown specifier for reverse string */
int print_R(va_list R); /* print the rot13 string */
int print_add(va_list add);
int print_space(va_list space);
int print_sharp(va_list sharp);
int print_less(va_list less);

#endif /* FUNC_PROTO_H */
