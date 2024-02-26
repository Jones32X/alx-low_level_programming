#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints own opcodes
 * @argc: amount of arguments
 * @argv: arguments array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int bytes;
	int j = 0;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (; j < bytes; j++)
	{
		if (j == bytes - 1)
		{
			printf("%02hhx\n", array[j]);
			break;
		}
		 printf("%02hhx\n ", array[j]);
	}
	return (0);
}
