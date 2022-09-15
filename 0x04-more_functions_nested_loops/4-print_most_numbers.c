#include "main.h"
/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 * Return: returns nothing
 */
void print_most_numbers(void)
{
	int n;

	for (numb = 48 ; numb <= 57 ; numb++)
	{
		if (numb != 50 && numb != 52)
		{
			_putchar(numb);
		}
	}
	_putchar('\n');
}

