#include "main.h"
#include <stdio.h>

/**
 * main - prints all accepted arguments
 * @argc: amount of arguments
 * @argv: argument array
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int jk = 0;

	for (; jk < argc; jk++)
	{
		printf("%s\n", argv[jk]);
	}
	return (0);
}
