#include <stdlib.h>
#include <time.h>


/**
* main - prints if the number is positive, negative, or 0
*
* Return: Always 0
*
* more headers goes there
*/

/* betty style doc for function main goes there */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is postive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zeor\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
