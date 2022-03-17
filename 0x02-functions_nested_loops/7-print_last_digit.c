#include "main.h"
/**
* print_last_digit - cheack the last number
* @num: the last number
* Return: the last number
*/

int print_last_digit(int num)
{
int n;

	if (num < 0)
		num = -num;

	n = num % 10;

	if (n < 0)
		n = -n;

	_putchar(n + '0');

	return (n);
}
