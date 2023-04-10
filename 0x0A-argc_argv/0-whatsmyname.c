#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints its name.
 * @argc: number of arguments
 * @argv: name of arfuments
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[argc - 1]);
	return (0);
}
