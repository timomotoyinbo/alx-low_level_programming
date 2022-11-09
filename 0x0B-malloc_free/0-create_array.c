#include "main.h"
#include <stdlib.h>

/**
  * create_array - array for print a string
  * @size: array number element
  * @c: char
  * Return: pointer
  */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	buffer = (char *)malloc(sizeof(char) * size);
	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			*(buffer + i) = c;
			i++;
		}

		return (buffer);
	}
}
