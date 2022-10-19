#include "main.h"

/**
  * main - print _putchar
  * written by tim
  * Return: 0
  */

int main(void)
{
	char spell[8] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
		_putchar(spell[i]);
	_putchar('\n');

	return (0);

}
