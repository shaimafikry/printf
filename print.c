#include "main.h"
/**
 * _printf -  printf func
 * @strng: char format
 * Return: count of printed char
*/
int _printf(char const *strng , ...)
{
	int i, count;
	va_list lst;
	sp_func sp_list [1] = {
		{'s', p_str}};

	count = 0;
	va_start(lst , strng);
	while (strng && strng[i])
	{
		if (strng[i] == '%')
		{
			i++;
			if (strng[i] == 's' || (strng[i] == 'd' ||
			strng[i] == 'x' || (strng[i] == 'o' || strng[i] == 'i')))
			{
				if (strng[i] == sp_list[i].specfr)
					count += sp_list[i].f();
			}
			else if (strng[i] == 'c')
				count += p_char(va_arg(lst, int));
			else if (strng[i] == '%')
				count += p_char('%');
			else
			{
				i--;
				goto start;
			}
		}
		else
		{
			start:
			p_char(strng[i]);
			count++;
		}
		i++;
	}
	/*end the varaibles list*/
	va_end(lst);
	return (count);
}
