#include <stdio.h>
/**
 * main -  a program that prints the lowercase alphabet in reverse, followed by a new line.
 * Return: 0 Success
 */
int main(void)
{
	int i;
	for (i=122;i>96;i--)
		putchar(i);
	putchar('\n');
	return (0);
}
