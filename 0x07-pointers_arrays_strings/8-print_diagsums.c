#include "main.h"

/**
* print_diagsums - prints the sums of the two diagonals of a square matrix
* @a: pointer to start of matrix
* @size: width of matrix column
*
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int diagonal_sum_1 = 0;
	int diagonal_sum_2 = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diagonal_sum_1 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		diagonal_sum_2 += a[i];
	}
	printf("%d, %d\n", diagonal_sum_1, diagonal_sum_2);
}
