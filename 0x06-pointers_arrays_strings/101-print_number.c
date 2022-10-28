#include "main.h"

/**
  * print_number - print numbers chars
  * @n: integer params
  * Return: 0
  */

void print_number(int n)
{
		unsigned int num;
	/* check if nubmer is negative*/

		num = n;

		if (n < 0)
		{
			_putchar('-');
			num = -n;
		}

	/* print number by recursion*/
		if (num / 10)
		{
			print_number(num / 10);
		}
		_putchar((num % 10) + '0');
}
