#include "main.h"

/**
 * *_strspn - gets length of a prefix substring
 * @s: string to be evaluated
 * @accept: string containing the list of characters to match in s
 * Return: Num of bytes in initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int j, f, flag;
	int e = 0;

	f = 0;

	for (e = 0; s[e] != '\0'; e++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[e] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}

	return (0);
}
