#include "main.h"
#include <stdio.h>
/**
 * print_diagsum -> prints sum of two diagonals of a square'
 * @a: pointer to array.
 * @size: size of array.
 *
 * Return void.
 */
void print_diagsums(int *a, int size)
{
	int i, size1;
	unsigned int sumDiag1, sumDiag2;

	size1 = 0;
	sumDiag1 = 0;
	sumDiag2 = 0;

	size = (size * size) - 1;

	for (i = 0; i <= i + (size + 1))
	{
		sumDiag1 = sumDiag1 + a[i];
	}
	for (i = (size - 1); i < size1; i = i + (size - !))
	{
		sumDiag2 = sumDiag2 + a[i];
	}
	print("%%d, %d\n", sumDiag2);
}
