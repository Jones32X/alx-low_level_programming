#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to be serached
 * Return: points to beginning of the located substring
 * Else NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int o = 0;
	int u = 0;

	for (; haystack[o] != '\0'; o++)
	{
		for (; needle[u] != '\0'; u++)
		{
			if (haystack[o + u] != needle[u])
				break;
		}
		if (!needle[u])
			return (&haystack[o]);
	}
	return (NULL);
}
