#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase except q and e
 * Return: 0 Success.
 */
int main(void)
{
	int i;

	char c = '\n';
	for (i = 97; i < 123; i++)
	{
		if (i == 101 || i == 113)
			i++;
		putchar(i);
	}
	putchar(c);
	return (0);
}
