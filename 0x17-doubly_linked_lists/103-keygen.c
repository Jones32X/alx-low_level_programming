#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Generates for the crackme5 file
 * @argc: amount of arguments passed
 * @argv: arguments for main
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	unsigned int u;
	unsigned int c;
	size_t length;
	size_t add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}

	length = strlen(argv[1]);
	p[0] = l[(length ^ 59) & 63];
	for (u = 0, add = 0; u < length; u++)
	{
		add += argv[1][u];
	}
	p[1] = l[(add ^ 79) & 63];
	for (u = 0, c = 1; u < length; u++)
	{
		c *= argv[1][u];
	}
	p[2] = l[(c ^ 85) & 63];
	for (c = argv[1][0], u = 0; u < length; u++)
	{
		if ((char)c <= argv[1][u])
		{
			c = argv[1][u];
		}
	}
	srand(c ^ 14);
	p[3] = l[rand() & 63];
	for (c = 0, u = 0; u < length; u++)
	{
		c = c + argv[1][u] * argv[1][u];
	}
	p[4] = l[(c ^ 239) & 63];
	for (c = 0, u = 0; (char)u < argv[1][0]; u++)
	{
		c = rand();
	}
	p[5] = l[(c ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
