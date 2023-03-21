#include <stdio.h>
/**
 * main - the entry point, a program that prints the alphabet in lowercase.
 * Return: 0 means Success.
 */
int main(void)
{
	int i;
	char c = '\n';

	for (i = 97; i < 123; i++)
		putchar(i);
	putchar(c);
	return (0);
}
