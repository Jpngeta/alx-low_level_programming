#include <stdio.h>

/**
  *main - Prints alphabet
  *Return: Always 0 (Success)
  */
int main(void)
{
	char al[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(al[i]);
	}
	putchar('\n');
	return (0);
}
