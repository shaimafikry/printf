#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
   
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
     _printf("Unknown:[%%]\n");
     _printf("Unknown:[%%%%]\n");
    printf("Unknown:[%%]\n");
    return (0);
}
