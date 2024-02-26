#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - prints results of simple operations
 * @argc: amount of arguments supplied to program
 * @argv: pointer array
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int number1;
	int number2;
	char *OP;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	number1 =  atoi(argv[1]);
	OP = argv[2];
	number2 = atoi(argv[3]);

	if (get_op_func(OP) == NULL || OP[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*OP == '/' && number2 == 0) || (*OP == '%' && number2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(OP)(number1, number2));

	return (0);
}
