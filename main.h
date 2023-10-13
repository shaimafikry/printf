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
	char specfr;
	int (*f)();
} sp_func;

int p_char(char c);
int p_str(char *str);
int p_oct (int num);
int p_hex (int num);
int p_decm (int num);
int _printf(char const *str, ...);

#endif
