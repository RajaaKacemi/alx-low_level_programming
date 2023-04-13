#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - a fonction concat two string
 *@s1: the first string
 *@s2: the second string
 *@n: the number of cases frome @s2
 *Return: a pointr (success), (echec): null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j;
	char *ptr;

	while (s2[i] != '\0')
		i++;
	if (n >= i)
		ptr = malloc(strlen(s1) + i + 1);
	else
		ptr = malloc(strlen(s1) + n + 1);
	i = j = 0;

	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
