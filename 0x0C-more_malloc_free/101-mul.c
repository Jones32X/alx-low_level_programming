#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * is_digit - searches for strings containing
 * non-digit chars
 * @s: string to be tested
 * Return: 1 else 0 if non-digit is picked up
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > 9)
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - return string length
 * @s: string to be checked
 * Return: the string length.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - main's errors are handled
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiples two numbers that are positive
 * @argc: argumebnts amount
 * @argv: argument array
 * Return: 0 (Sucess)
 */

int main(int argc, char *argv[])
{
	char *string1, *string2;
	int length1, length2, length, i, carry, digit1, digit2, *result, A = 0;

	string1 = argv[1], string2 = argv[2];
	if (argc != 3 || !is_digit(string1) || !is_digit(string2))
		errors();
	length1 = _strlen(string1);
	length2 = _strlen(string2);
	length = length1 + length2 + 1;
	result = malloc(sizeof(int) * length);
	if (!result)
		return (1);
	for (i = 0; i <= length1 + length2; i++)
		result[i] = 0;
	for (length1 = length - 1; length1 >= 0; length1--)
	{
		digit1 = string1[length1] - '0';
		carry = 0;
		for (length2 = _strlen(string2) - 1; length2 >= 0; length2--)
		{
			digit2 = string2[length2] - '0';
			carry += result[length1 + length2 + 1] + (digit1 * digit2);
			result[length1 + length2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[length1 + length2 + 1] += carry;
	}
	for (i = 0; i < length - 1; i++)
	{
		if (result[i])
			A = 1;
		if (A)
			_putchar(result[i] + '0');
	}
	if (!A)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
