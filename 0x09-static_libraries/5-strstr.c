#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 *  needle in the string haystack.
 *  @haystack: tstring to be searched
 *  @needle: substring to be located
 *  Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{


	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *h = needle;

		while (*m == *h && *h != '\0')
		{
			m++;
			h++;
		}
		if (*h == '\0')
			return (haystack);
	}
	return (0);
}
