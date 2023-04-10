#include "main.h"
#include <stdio.h>
/**
 * main -  a program that prints its name.
 * @args: number of arguments
 * @argv: name of arfuments
 * Return: Always 0(Success)
 */
int main(int args, char *argv[])
{      

	printf("%s\n", argv[args-1]);
	return (0);
}
