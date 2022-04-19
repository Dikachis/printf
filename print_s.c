#include "main.h"
/**
 * p_string - prints string
 * @args: va_list
 * Return: number of characters printed
*/
int p_string(va_list args)
{
	char *s;
	int i = 6;

	s = va_arg(args, char*);
	if (s)
	i = _printarg(s);
	else
	_printarg("(null)");
return (i);
}
