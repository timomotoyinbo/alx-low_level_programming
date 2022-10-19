#include "main.h"

/**
  * print_alphabet - This print in lowercase all aphabets -- a to z
  * key takes one character 'a' per time
  */

void print_alphabet(void)
{
	char key;

	for (key = 'a'; key <= 'z'; key++)
		_putchar(key);

	_putchar('\n');
}
