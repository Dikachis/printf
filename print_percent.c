#include "main.h"
/**
 * p_percent - prints percent symbol
 * @args: va_list
 * Return: number of characters printed
*/
int p_percent(va_list args __attribute__((unused)))
{
	char *s;
	int i;

	s = "%";
	i = _putchar(s);
return (i);
}
