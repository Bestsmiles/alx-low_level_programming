#include "main.h"

/**
 * _memcpy -> a memory copy
 * @dest: the destination memory
 * @src: the source memory
 * @n: the number of bytes to be copied
 * Return: string copied from source
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];

	return (dest);
}
