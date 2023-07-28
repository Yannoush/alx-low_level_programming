#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i, y;
	char s1[] = "aAeEoOtTIL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[i] == s1[y])
			{
				n[i] = s2[y];
			}
		}
	}
	return (n);
}
