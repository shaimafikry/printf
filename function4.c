#include "main.h"
/**
 * p_oct -  turns edcimal to octal and print it
 * @lst: vardic list
 * Return: num of printed char
 */
int p_oct(va_list lst)
{
	unsigned int i, oct, num;

	oct = va_arg(lst, unsigned int);
	num = oct;
	i = 0;
	while (oct != 0)
	{
		i++;
		oct = oct / 8;
	}
	print_octal(num);
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

	bin = va_arg(lst, int);
	print_binary(bin);
	i = 0;
	while (bin != 0)
	{
		i++;
		bin = bin / 2;
		}
return (i);
}
