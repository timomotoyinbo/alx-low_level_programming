#include  "main.h"

/**
  * print_alphabet_x10 - print 10 times the alphabets, in lowercase
  */

void print_alphabet_x10(void)
{
	int k;
	char key;

	for (k = 1; k < 10; k++)
	{
		for (key = 'a'; key <= 'z'; key++)
		{
			_putchar(key);
		}
		_putchar(key);
	}
}
