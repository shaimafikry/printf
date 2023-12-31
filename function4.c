#include "main.h"
/**
 * p_oct -  turns edcimal to octal and print it
 * @lst: vardic list
 * Return: num of printed char
 */
int p_oct(va_list lst)
{
	unsigned int i, num;

	num = va_arg(lst, unsigned int);
	if (num == 0)
	{
		p_char('0');
		return (1);
	}
	i = print_octal(num);
	return (i);
}
/**
 * print_binary - Converts a number from base 10 to binary
 * @list: List of arguments passed to this function
 * Return: The length of the number printed
 */
int p_bin(va_list list)
{
	unsigned int num;
	int i, len;
	char *str;
	char *rev_str;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (p_char('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(str);
	free(rev_str);
	return (len);
}
