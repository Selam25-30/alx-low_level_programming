#include "main.h"
/**
 * binary_to_uint - convert binary to decimal number
 * @b: a stirng holds o's and 1's
 * Return: number or 0 if the string is NULL and contain any character
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count, i = 0;
	unsigned  int sum = 0, mul = 1, exp, temp;

	if (b == NULL)
		return (0);
	count = strlen(b);
	exp = count - 1;
	while (i < count)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		if (b[i] == 49)
		{
			temp = exp;
			while (temp != 0)
			{
				mul *= 2;
				temp--;
			}
			sum += mul;
			mul = 1;
		}
		else
		{
			sum += 0;
		}
		i++;
		exp--;
	}
	return (sum);
}
