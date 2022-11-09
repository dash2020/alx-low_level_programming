#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int _strlen(char *s);

/**
  * _strdup - copies a string to a newly allocated space in memory
  * @str: string to be duplicated
  * Return: pointer to a new string (a duplicate of str). If str is NULL,
  * return NULL
  */

char *_strdup(char *str)
{
	char *newStr;
	int i, lenStr = _strlen(str);

	if (str == NULL)
		return (NULL);

	newStr = (char *)malloc(sizeof(str) * lenStr);

	if (newStr == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		newStr[i] = str[i];
		i++;
	}
	return (newStr);
}

/**
  * _strlen - calculates the length of a string
  * @s: string to be measured
  * Return: number of chars in s
  */
int _strlen(char *s)
{
	int lenS = 0;

	while (s[lenS] != '\0')
		lenS++;
	return (lenS);
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
