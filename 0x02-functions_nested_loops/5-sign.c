#include "main.h"
/**
 * print_sign - cheks for sign
 * @n: the caaracter holds number
 * Return: 1 for positive -1 for negative
 * 0 for 0
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');

		return (0);
	}
	else if (n > 1)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
