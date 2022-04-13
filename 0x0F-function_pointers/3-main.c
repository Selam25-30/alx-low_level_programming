#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: the number of args
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int (*op_func)(int, int), arg1, arg2;

	if (argc != 4)
		printf("Error\n"), exit(98);

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (!op_func)
		printf("Error\n"), exit(99);

	if (!arg2 && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", op_func(arg1, arg2));
	return (0);
}
