#include "main.h"
/**
 * p_int - prints an integer
 * @args: va_list
 * Return: number of characters printed
*/
int p_int(va_list args)
{
	char *str;
	char *sign;
	int i = 0;
	int num;
	unsigned int num2;

	sign = "-";
	num =  va_arg(args, int);
	num2 = num;
	if (num < 0)
	{
		_putchar(sign);
		num2 = -num;
		i = 1;
	}
	str = change_base(num2, 10);
	i += _printarg(str);
return (i);
}
