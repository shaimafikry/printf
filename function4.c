#include "main.h"
/**
 * p_oct -  turns edcimal to octal and print it
 * @lst: vardic list
 * Return: num of printed char
 */
int p_oct(va_list lst)
{
	unsigned int i, num;

	num = va_arg(lst, unsigned int);
	if (num == 0)
	{
		p_char('0');
		return (1);
	}
	i = print_octal(num);
	return (i);
}
/**
 * p_bin -  turns dcimal to binary and print it
 * @lst: vardic list
 * Return: num of printed char
 */
int p_bin(va_list lst)
{
	int i, bin;

	bin = va_arg(lst, unsigned int);
	if (bin == 0)
	{
		p_char('0');
		return (1);
	}
	if (bin == 1)
	{
		p_char('1');
		return (1);
	}
	i = 0;
	i = print_binary(bin);
return (i);
}
