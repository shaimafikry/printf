#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#ifndef MAIN_H
#define MAIN_H
/**
 * struct sp_func -  struct holds specifier and functions
 * @specfr: specifier
 * @f: pointer to function
 * sp_func - typdef struct
 * 
*/
typedef struct sp_func
{
	char *sym;
	int (*f)();
} sp_func;

int p_char(char c);
int print_char(va_list);
int print_string(va_list);
int _printf(char const *format, ...);
int parser(const char *format, sp_func sp_list[], va_list lst);

#endif
