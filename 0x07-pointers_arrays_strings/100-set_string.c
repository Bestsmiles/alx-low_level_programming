#include "main.h"

/**
 * set_string -> sets a value of a pointer of a character.
 * @s: pointer to pointer.
 * @to: pointer to character.
 *
 * Return: void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
