#ifndef _VARIADIC_FUNTIONS_H_
#define _VARIADIC_FUNTIONS_H_

#include <stdarg.h>

/**
 * struct print - print function
 * @tip: print type
 * @prinfun: print function
 */
typedef struct print
{
	char *tip;
	void (*prinfun)(va_list);
} print_f;






int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list c);
void print_int(va_list i);
void print_float(va_list f);
void print_str(va_list s);
int _printf(const char *format, ...)
#endif /*_VARIADIC_FUNTIONS_H_*/
