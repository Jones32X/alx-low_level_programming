#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * check_num  - checks strings
 * @str: array name
 * Return: Always 0 Success
 */

int check_num(char *str)
{
	unsigned int cnt;

	cnt = 0;
	while (cnt < strlen(str))
	{
		if (!isdigit(str[cnt]))
		{
			return (0);
		}
		cnt++;
	}
	return (1);
}

/**
 * main - prints program name
 * @argc: argument number
 * @argv: argument
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int cnt;
	int string_To_Int;
	int SUM = 0;

	cnt = 1;
	while (cnt < argc)
	{
		if (check_num(argv[cnt]))
		{
			string_To_Int = atoi(argv[cnt]);
			SUM += string_To_Int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		cnt++;
	}
	printf("%d\n", SUM);
	return (0);
}
