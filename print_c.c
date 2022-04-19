#include "main.h"
/**
 * p_char - prints char
 * @args: va_list
 * Return: number of characters printed
*/
int p_char(va_list args)
{
	char ch[2];
	int i;

	ch[1] = '\0';
	ch[0] = va_arg(args, int);
	i = _putchar(ch);
return (i);
}
