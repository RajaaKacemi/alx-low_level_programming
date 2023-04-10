#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv: name of arfuments
 * Return: Always 0(Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc);
	return (0);
}
