#include <stdio.h>
/**
 * main - print possible combination of two 2-digit numbers
 *
 * Return: returns zero at the end
 */
int main(void)
{
	int i, P;

	for (i = 0; i < 100; i++)
	{
		for (P = 0; P < 100; i++)
		{
			if (P > i)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((P / 10) + '0');
				putchar((P % 10) + '0');
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

