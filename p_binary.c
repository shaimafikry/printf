#include "main.h"
/**
 * print_binary -  tunrs decimal o binary and print it
 * @num: integr
 * Return: num printed
*/
void print_binary(int num)
{
    if ( num != 0)
    {
	print_binary(num / 2);
	
	if (num % 2 )
	    putchar('1');
	else 
	    putchar('0');
	    
    }
}
