#include<stdio.h>
#include "main.h"

/**
 *main - Entry point
 *
 *Return: return Always(0) - Success
 **/
int main(void)
{
	char print[] = "_putchar";
	int p;

	for (p = 0; print[p] != '\0'; p++)
	{
		_putchar(print[p]);
	}

	_putchar('\n');

	return (0);
}
