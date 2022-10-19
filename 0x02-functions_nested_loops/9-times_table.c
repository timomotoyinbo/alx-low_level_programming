#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
	int no, multi, prodi;

	for (no = 0; no <= 9; no++)
	{
		_putchar('0');

		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');

			prodi = no * multi;

			if (prodi <= 9)
				_putchar(' ');
			else
			{
				_putchar((prodi / 10) + '0');
			}
			_putchar((prodi % 10) + '0');
		}
		_putchar('\n');
	}
}
