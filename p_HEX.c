#include "main.h"
/**
 * print_HEXA - recursion print hexadecimal
 * @num: double number
 * Return: num in reverse
 */
int print_HEXA(unsigned int num)
{
	int count;

	count = 0;
	if (num != 0)
	{
		count += print_HEXA(num / 16);
		switch (num % 16)
		{
			case 10:
				p_char('A');
				count++;
				break;
			case 11:
				p_char('B');
				count++;
				break;
			case 12:
				p_char('C');
				count++;
				break;
			case 13:
				p_char('D');
				count++;
				break;
			case 14:
				p_char('E');
				count++;
				break;
			case 15:
				p_char('F');
				count++;
				break;
			default:
				p_char((num % 16) + '0');
				count++;
				break;
		}
	}
	return (count);
}
