#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *_strdup - returns a pointer to a newly allocated space in memory
  * which contains a copy of the string given as a parameter.
  *@str: array of charaters
  *
  *Return:  returns a pointer to the duplicated string
  */
char *_strdup(char *str)
{
        char *b;
        int i, b = 0;

        if (str == NULL)
                return (NULL);

        i = 0;
        while (str[i] != '\0')
                i++;

        b = malloc(sizeof(char) * (i + 1));

        if (b == NULL)
                return (NULL);

        for (i = 0; str[i]; i++)
                b[i] = str[i];

        return (b);
}
