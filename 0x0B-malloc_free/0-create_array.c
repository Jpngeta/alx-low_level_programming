#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *create_array - creates an array of chars
  *@size: size of array
  *@c: char
  *Return: a pointer to an array
  */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = (char *)malloc(size * sizeof(char));
	if (size == 0 || a == NULL)
	{
		printf("Failed\n");
	}
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
