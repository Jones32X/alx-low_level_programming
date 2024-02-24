#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money.
 * @argc: amount of arguments
 * @argv: argument array
 *  Return: 0 (Success), else 1 for ERROR
 */

int main(int argc, char *argv[])
{
	int CoInS[] = {25, 10, 5, 2, 1};
	int number;
	int k = 0;
	int Result = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; k < 5 && number >= 0; k++)
	{
		while (number >= CoInS[k])
		{
			Result++;
			number -= CoInS[k];
		}
	}
	printf("%d\n", Result);

	return (0);

}
