#include "main.h"
/**
 * _strstr -> the first occurrance of the substring needle in the str haystack
 * @haystack: main str to be examined
 * @needle: the searched in haystack
 * Return: return 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *str1, str2;
	while (haystack != '\0')
	{
		str1 = haystack;
		str2 = needl;

		while (*haystack != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}
