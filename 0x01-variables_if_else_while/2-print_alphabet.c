#include <stdio.h>

/**
  *main - Prints the alphabet
  *Return: Always 0 (Success)
  */
int main(void)
{
	char al[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0; i < 26; i++)
	{
		putchar(al[i]);
	}
	putchar('\n');
	return (0);
}
