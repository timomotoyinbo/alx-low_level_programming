#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - prints the multiplication of two integers
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 if true, 1 if false
  */

int main(int argc, char *argv[])
{
		int a, b, c;

		if (argc != 3)
		{
			puts("Error");
			return (1);
		}

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = a * b;
		printf("%d\n", c);
		return (0);
}
