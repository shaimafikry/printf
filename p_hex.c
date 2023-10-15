#include "main.h"
/**
 * print_hexa - recursion print hexadecimal
 * @num: double number
 * Return: num in reverse
 */
void print_hexa(unsigned int num)
{
	if (num != 0)
	{
		print_hexa(num / 16);
		switch (num % 16)
		{
			case 10:
				p_char('a');
				break;
			case 11:
				p_char('b');
				break;
			case 12:
				p_char('c');
				break;
			case 13:
				p_char('d');
				break;
			case 14:
				p_char('e');
				break;
			case 15:
				p_char('f');
				break;
			default:
				p_char(num % 16 + '0');
				break;
		}
	}
}
