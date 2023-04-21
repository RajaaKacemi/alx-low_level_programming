#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int Nbytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	Nbytes = atoi(argv[1]);

	if (Nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;

	for (i = 0; i < Nbytes; i++)
	{
		if (i == Nbytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}

