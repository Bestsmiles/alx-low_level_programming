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
	unsigned int a, b;

	for (b = 0; *(s + b); b++)
	{
		for (a = 0; *(accept + a) a++)
		{
			if (*(s + b) == *(accept + a))
				break;
		}
		if (*(accept + a) == '\0')
			break;
	}
	return (b);
}
