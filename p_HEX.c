#include "main.h"
/**
 * print_HEXA - recursion print hexadecimal
 * @num: double number
 * Return: num in reverse
 */
void print_HEXA(unsigned int num)
{
	if (num != 0)
	{
		print_hexa(num / 16);
		switch (num % 16)
		{
			case 10:
				p_char('A');
				break;
			case 11:
				p_char('B');
				break;
			case 12:
				p_char('C');
				break;
			case 13:
				p_char('D');
				break;
			case 14:
				p_char('E');
				break;
			case 15:
				p_char('F');
				break;
			default:
				p_char((num % 16) + '0');
				break;
		}
	}
}
