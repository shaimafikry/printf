#include "main.h"
/**
 * p_hexa -  turns edcimal to hexadecimal and print it
 * @list: variadic list
 * Return: num of printed char
*/
int p_hexa(va_list lst)
{
	unsigned int i, hex;

	hex = va_arg(lst, unsigned int);
	print_hexa(hex);
	i = 0;
	while(hex != 0)
	{
        i++;
        hex = hex /16;
        }
	return (i);
}
/**
 * p_hexa -  turns edcimal to hexadecimal and print it
 * @list: variadic list
 * Return: num of printed char
*/
int p_HEXA(va_list lst)
{
	unsigned int i, hex;

	hex = va_arg(lst, unsigned int);
	print_HEXA(hex);
	i = 0;
	while(hex != 0)
	{
        i++;
        hex = hex /16;
        }
	return (i);
}
