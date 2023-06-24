#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
  *print_numbers - prints numbers
  *@separator: the string to be printed between numbers
  *@n: the nuber of integers passed to the function
  *...: Indefinte number of arguments to be printed
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
