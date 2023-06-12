#include "main.h"
/**
  *_strlen_recursion - A function that returns the length of a string
  *@s: string whose length is to be measured
  *Return: 0 (Success)
  */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
