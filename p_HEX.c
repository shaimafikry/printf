#include "main.h"
/**
 * print_hexa - recursion print hexadecimal
 * @num: double number
 * Return: num in reverse
 */
 void print_HEXA(unsigned int num)
{
	if ( num != 0)
	{
		print_hexa(num / 16);
		switch (num % 16)
		{
			case 10 :
				putchar('A');
				break;
			case 11 :
				putchar('B');
				break;
			case 12 :    
				putchar('C');
				break;
			case 13 :
				putchar('D');
				break;
			case 14 :
				putchar('E');
				break;
			case 15 :
				putchar('F');
				break;        
			default:
				putchar(num % 16 + '0');
				break;
		}
	}
}
