#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *main - a program that multiplies two numbers.
  *@argc: argument count
  *@argv: array of arguments
  *Return: Always 0(Success)
  */
int main(int argc, char **argv)
{
	int mult, a, b;

	if (argc < 3 || argc > 3)
	{
		printf("Error");

		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mult = a * b;

	printf("%d\n", mult);

	return (0);
}
