#include "main.h"
/**
 * print_binary -  tunrs decimal o binary and print it
 * @num: integr
 * Return: num printed
*/
int print_binary(unsigned int num)
{
	int count;

	count = 0;
	if (num != 0)
	{
		count += print_binary(num / 2);
	if (num % 2)
	{
		p_char('1');
		count++;
	}
	else
	{
		p_char('0');
		count++;
	}
	}
	return (count);
}
