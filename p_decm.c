#include "main.h"
/**
 * p_decm - print integrs
 * @num: integer
 * Return: count of printed num;
*/
int p_decm (int num)
{
	int count, n;

	count = 0;
	if (num < 0)
		p_char('-');
	if (num == 0)
	{
		p_char ('0');
		return (1);
	}
	while (num / 10 != 0)
	{
		n = num % 10;
		p_char(n + '0');
		count++;
		num = num / 10;
	}
	return (count);
}
