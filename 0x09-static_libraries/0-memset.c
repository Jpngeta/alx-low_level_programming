#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area
 * @s: starting address of memory to be filled
 * @b: the character to fill the memory area with
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
