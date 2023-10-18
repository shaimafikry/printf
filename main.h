#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
/**
 * struct sp_func -  struct holds specifier and functions
 * @sym: char specifier
 * @f: pointer to function
 * sp_func - typdef struct
*/
typedef struct sp_func
{
	char *sym;
	int (*f)();
} sp_func;

int p_char(char c);
int print_specf(void);
int print_char(va_list);
int print_string(va_list);
int p_strasc(va_list);
int p_rev_string(va_list);
int _printf(char const *format, ...);
int parser(const char *format, sp_func sp_list[], va_list lst);
int print_integer(va_list);
int print_number(va_list);
int print_unsgined_number(unsigned int);
int unsigned_integer(va_list);
int print_hexa(unsigned int num);
int p_hexa(va_list);
int print_HEXA(unsigned int num);
int p_HEXA(va_list);
int print_octal(unsigned int num);
int p_oct(va_list);
int p_bin(va_list list);
unsigned int base_len(unsigned int num, int base);
char *rev_string(char *);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_reversed(va_list arg);
int rot13(va_list);
void write_base(char *str);

#endif
