#include "main.h"
/**
 * p_hexa - turns edcimal to hexadecimal and print it
 * @lst: variadic list
 * Return: num of printed char
*/

int p_hexa(va_list lst)
{
	unsigned int i, hex;

	i = 0;
	hex = va_arg(lst, unsigned int);
	if (hex == 0)
	{
		p_char('0');
		return (1);
	}
	i = print_hexa(hex);
	return (i);
}

/**
 * p_HEXA -  turns edcimal to hexadecimal and print it
 * @lst: variadic list
 * Return: num of printed char
*/
int p_HEXA(va_list lst)
{
	unsigned int i, HEX;

	i = 0;
	HEX = va_arg(lst, unsigned int);
	if (HEX == 0)
	{
		p_char('0');
		return (1);
	}
	i = print_HEXA(HEX);
	return (i);
}
