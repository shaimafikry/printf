#include "main.h"
/**
 * print_binary -  tunrs decimal o binary and print it
 * @num: integr
 * Return: num printed
*/
void print_binary(int num)
{
	if (num != 0)
	{
		print_binary(num / 2);
	if (num % 2)
		p_char('1');
	else
		p_char('0');
	}
}
