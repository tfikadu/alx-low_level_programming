#include<stdio.h>

/**
 * main - lowercase and uppercase
 *
 * Return: Always (Success)
 */
int main(void)
{
	char C;
	
	for (C = 'a'; C <= 'z'; C++)
	{
		putchar(C);
	}

	for (C = 'A'; C <= 'Z'; C++)
	{
		putchar(C);
	}

	putchar('\n');

	return (0);
}

