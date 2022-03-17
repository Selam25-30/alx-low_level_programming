#include "main.h"
/**
 * print_alphabet_x10 -Chek description
 * Description: It prints the alphabet
 * Return: Noting.
 */

void print_alphabet_x10(void)
{
	char i;
	int r = 0;

	while (r <= 9)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		r++;
	}
}
