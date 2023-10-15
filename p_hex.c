#include "main.h"
/**
 * print_hexa - recursion print hexadecimal
 * @num: double number
 * Return: num in reverse
 */
 void print_hexa(unsigned int num)
{
	if ( num != 0)
	{
		print_hexa(num / 16);
		switch (num % 16)
		{
			case 10 :
				putchar('a');
				break;
			case 11 :
				putchar('b');
				break;
			case 12 :    
				putchar('c');
				break;
			case 13 :
				putchar('d');
				break;
			case 14 :
				putchar('e');
				break;
			case 15 :
				putchar('f');
				break;        
			default:
				putchar(num % 16 + '0');
				break;
		}
	}
}
