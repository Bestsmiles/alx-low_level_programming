#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -> this prints the consecutive characters of s1 that are in s2
 * @s: the source string
 * @accept: the searching string
 *
 * Return: the new string.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			return (s + i);
		}
	}
	return (0);
}
