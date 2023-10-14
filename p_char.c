#include "main.h"
/**
 * p_char - printd char
 * @c: char
 * Return: 1;
 */
int p_char(char c)
{
	write(1, &c, 1);
	return (1);
}
