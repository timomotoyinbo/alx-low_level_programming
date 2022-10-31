#include "main.h"

/**
*_memset - fills memory with a constant byte.
*fills the first n bytes of the memory area pointed
*to by s with the constant b.
*@s: pointer to memory area.
*@b: constant to fill memory with.
*@n: bytes of the memory area to be filled.
*Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
		int index;

		for (index = 0;  n > 0; index++)
		{
			s[index] = b;
			n--;
		}
		return (s);
}
