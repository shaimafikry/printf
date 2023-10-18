#include "main.h"
/**
 * print_hexa - recursion print hexadecimal
 * @num: double number
 * Return: num in reverse
 */
int print_hexa(unsigned int num)
{
	int count;

	count = 0;
	if (num != 0)
	{
		count += print_hexa(num / 16);
		switch (num % 16)
		{
			case 10:
				p_char('a');
				count++;
				break;
			case 11:
				p_char('b');
				count++;
				break;
			case 12:
				p_char('c');
				count++;
				break;
			case 13:
				p_char('d');
				count++;
				break;
			case 14:
				p_char('e');
				count++;
				break;
			case 15:
				p_char('f');
				count++;
				break;
			default:
				p_char(num % 16 + '0');
				count++;
				break;
		}
	}
	return (count);
}
