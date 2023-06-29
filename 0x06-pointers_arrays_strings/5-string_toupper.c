#include "main.h"
/**
 * string_toupper - Convert all lowercase alphabets to uppercase in a string
 * @n: pointer
 *
 * Description: This function takes
 * a string and converts all lowercase alphabets
 * to uppercase. It modifies the string
 * in place and returns a pointer to the modified
 * string.
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
		i++;
	}
	return (n);
}

