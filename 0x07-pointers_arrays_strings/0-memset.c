#include "main.h"

/**
*_memset - fills memory with a constant byte.
*fills the first n bytes of the memory area pointed
*to by s with the constant b.
*@s: pointer to memory area.
*@b: constant to fill memory with.
*@n: bytes of the memory area to be filled.
*Return: pointer to memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
		unsigned int nomba;

		while (nomba < n)
		{
			s[nomba] = b;
			nomba++;
		}

		return (s);
}
