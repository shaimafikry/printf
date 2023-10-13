#include"main.h"
/**
 * parser - Receives the main string and all the necessary parameters to
 * print a formated string.
 * @format: A string containing all the desired characters.
 * @sp_list: A list of all the posible functions.
 * @lst: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */
int parser(const char *format, sp_func sp_list[], va_list lst)
{
int i, j, r_val, count;

	count = 0;
	for (i = 0; format[i] != '\0'; i++)/* Iterates through the main str*/
	{
		if (format[i] == '%') /*Checks for format specifiers*/
		{
			/*Iterates through struct to find the right func*/
			for (j = 0; sp_list[j].sym != NULL; j++)
			{
				if (format[i + 1] == sp_list[j].sym[0])
				{
					r_val = sp_list[j].f(lst);
					if (r_val == -1)
						return (-1);
					count += r_val;
					break;
				}
			}
			if (format[i + 1] == '%')
				{
				p_char(format[i + 1]);
				count ++;
				}
			else if (sp_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					p_char(format[i]);
					p_char(format[i + 1]);
					count = count + 2;
				}
				else
					return (-1);
			}
			i = i + 1; /*Updating i to skip format symbols*/
		}
		else
		{
			p_char(format[i]); /*call the write function*/
			count++;
		}
	}
	return (count);
}
