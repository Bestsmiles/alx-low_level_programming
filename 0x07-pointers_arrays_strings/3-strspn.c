#include "main.h"

/**
 * _strspn -> this prints the consecutive characters of s1 that are in s2
 * @s: the source string
 * @accept: the searching string
 *
 * Return: the new string.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + j) == *(accept + i))
				break;
		}
	if (*(accept + i) == '\0')
		break;
	}
	return (j);
}
