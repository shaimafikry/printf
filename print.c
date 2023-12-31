#include "main.h"
/**
 * _printf -  printf func
 * @format: char format
 * Return: count of printed char
*/
int _printf(char const *format, ...)
{
	int count;
	sp_func sp_list[] = {
		{"s", print_string},
		{"c", print_char},
		{"d", print_integer},
		{"i", print_integer},
		{"c", print_char},
		{"%", print_specf},
		{"u", unsigned_integer},
		{"x", p_hexa},
		{"X", p_HEXA},
		{"o", p_oct},
		{"b", p_bin},
		{"S", p_strasc},
	    {"r", print_reversed},
		{"R", rot13}
		};
	va_list lst;

	if (format == NULL)
	return (-1);
	va_start(lst, format);
	count = parser(format, sp_list, lst);
	va_end(lst);
	return (count);
}
