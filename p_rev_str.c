#include "main.h"
/**
 * rev_string -  reverse and print string
 * @str: char *
 * Return: num of printed chars
*/
int rev_string(char *str)
{
	int count;

	count = 0;
	if (str[0] != '\0')
	{
		count += rev_string(str + 1);
		p_char(str[0]);
		count++;
	}
	return (count);
}
/**
 * p_rev_string - Prints a string in reverse
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int p_rev_string(va_list list)
{
	int i;
	char *str;

	i = 0;
	str = va_arg(list, char *);
	i = rev_string(str);
	return (i);
}
