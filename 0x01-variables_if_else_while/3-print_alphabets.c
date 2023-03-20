#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 * Return: 0 means Success.
 */
int main(void)
{
	int i;
	char c = '\n';
	for (i = 97;i < 123; i++)
	{
		putchar(i);
	}
	for (i = 65; i<91; i++)
	{
		putchar(i);
	}
	putchar(c);
	return (0);
}
