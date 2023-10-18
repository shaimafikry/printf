#include "main.h"
/**
 * print_octal - recursion print ocal num
 * @num: double number
 * Return: num in reverse
 */
int print_octal(unsigned int num)
{
	int count;

	count = 0;
	if (num != 0)
	{
		print_octal(num / 8);
		if ((num % 8) > 8)
			num = num % 8;
		p_char(num % 8 + '0');
		count++;
	}
	return (count);
}
