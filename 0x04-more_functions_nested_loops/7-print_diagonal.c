#include "main.h"

/**
* print_diagonal - printing lines diagonal
* @n: input variable
* Return: void
 */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_purchar(92);
			_purchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
