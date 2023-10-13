#include "main.h"
/**
 * p_str - prints string
 * @str: pointer
 * Return: count of string printed
 */
int p_str (char *str)
{
	int i, count;

	if (str == NULL)
		return(0);
	count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		p_char(str[i]);
		count++;
	}
	return (count);
}
