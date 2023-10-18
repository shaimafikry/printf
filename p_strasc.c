#include "main.h"
/**
 * p_strasc - printsHandle the following custom conversion specifier
 * prints the string.Non printable characters
 * (0 < ASCII value < 32 or >= 127) are printed this way: \x,
 * followed by ASCII value in hexadecimal (upper case - always 2 characters)
 * @list: valist
 * Return: char printed
*/
int p_strasc(va_list list)
{
	int i, count;
	char *str;

	count = 0;
	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			p_char('\\');
			p_char('x');
			count += 2;
			if (str[i] < 16)
			{
				p_char('0');
				count++;
			}
			count += print_HEXA(str[i]);
			i++;
		}
		p_char(str[i]);
		count++;
	}
	return (count);
}
