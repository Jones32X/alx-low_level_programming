#include "main.h"
#include <stdio.h>

/**
 * _atoi - string is converted to int
 * @s: string for conversion
 *
 * Return: int converted from the string
 */

int _atoi(char *s)
{
	int j = 0;
	int c = 0;
	int m = 0;
	int length = 0;
	int fFf = 0;
	int digit = 0;

	while (s[length] != '\0')
		length++;
	while (j < length && fFf == 0)
	{
		if (s[j] == '-')
			c++;

		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			if (c % 2)
				digit = -digit;
			m = m * 10 + digit;
			fFf = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			fFf = 0;
		}
		j++;
	}
	if (fFf == 0)
		return (0);
	return (m);
}

/**
 * main - two numnber multiplication
 * @argc: amount of arguments
 * @argv: argument array
 * Return: 0 if Successful, else 1 for error
 */

int main(int argc, char *argv[])
{
	int RESULT;
	int number1;
	int number2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	number1 = _atoi(argv[1]);
	number2 = _atoi(argv[2]);
	RESULT = number1 * number2;
	printf("%d\n", RESULT);

	return (0);
}
