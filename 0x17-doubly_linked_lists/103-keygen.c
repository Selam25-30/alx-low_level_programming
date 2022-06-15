#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int f1(int len);
int f2(char *name, int len);
int f3(char *name, int len);
int f4(char *name, int len);
int f5(char *name, int len);
int f6(char c);

/**
 * main - entry point of crackme
 * @ac: argument count
 * @av: argument vector
 *
 * Return: always 0
 */
int main(int ac, char **av)
{
	long str[] = {
			0x3877445248432d41,
			0x42394530534e6c37,
			0x4d6e706762695432,
			0x74767a5835737956,
			0x2b554c59634a474f,
			0x71786636576a6d34,
			0x723161513346655a,
			0x6b756f494b646850
		};
	char pass[7];
	char *name = av[1];
	int len = strlen(name);
	int ret = ac;

	ret = f1(len);
	pass[0] = ((char *)str)[ret];

	ret = f2(name, len);
	pass[1] = ((char *)str)[ret];

	ret = f3(name, len);
	pass[2] = ((char *)str)[ret];

	ret = f4(name, len);
	pass[3] = ((char *)str)[ret];

	ret = f5(name, len);
	pass[4] = ((char *)str)[ret];

	ret = f6(name[0]);
	pass[5] = ((char *)str)[ret];

	pass[6] = 0;
	printf("%s", pass);
	return (0);
}

/**
 * f1 - function for 1st char
 * @len: length of name
 *
 * Return: encoded char
 */
int f1(int len)
{
	return ((len ^ 0x3b) & 0x3f);
}

/**
 * f2 - function for 2nd char
 * @name: the user name
 * @len: length of name
 *
 * Return: encoded char
 */
int f2(char *name, int len)
{
	int ret = 0;
	int i = 0;

	for (; i < len; i++)
		ret += name[i];

	return ((ret ^ 0x4f) & 0x3f);
}

/**
 * f3 - function for 3rd char
 * @name: the user name
 * @len: length of name
 *
 * Return: encoded char
 */
int f3(char *name, int len)
{
