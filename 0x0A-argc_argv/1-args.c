#include "main.h"
#include <stdio.h>
/**
 * main - ampount of arguments passed to program
 * @argc: argument amount
 * @argv: argumen array
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
