#include <stdio.h>
#include "main.h"

/**
  *main - print the number of arguments passed to a program
  *@argc: argument count
  *@argv: an array of arguments
  *
  *Return: Always 0(Success)
  */
int main(int argc, char **argv)
{
	(void) argv;
	/*Ignoring argv*/
	printf("%d\n", argc - 1);

	return (0);
}

