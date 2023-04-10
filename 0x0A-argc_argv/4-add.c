#include <stdio.h>
#include <stdlib.h>

/**
*main - adds positive numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: 0 success
*/

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
