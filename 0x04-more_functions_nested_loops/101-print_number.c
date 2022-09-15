#include "main.h"
/**
 * print_number - Prints a number
 * @n: The number to print
 */
void print_number(int m)
{
	if (m < 0)
	{
		_putchar('-');
		if (m < -9)
			print_number(m / -10);
		_putchar('0' - m % 10);
	}
	else
	{
		if (m > 9)
			print_number(m / 10);
		_putchar(m % 10 + '0');
	}
}








