#include "main.h"
/**
 * print_octal - recursion print ocal num
 * @num: double number
 * Return: num in reverse
 */
void print_octal(unsigned int num)
{
	if ( num != 0)
	{
   	 print_octal(num / 8);
   	 if ((num % 8) > 8)
    	    num = num % 8;     
   	 putchar(num % 8 + '0');
	}
}
