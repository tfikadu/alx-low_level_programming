#include "main.h"
/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 *
 */
void print_number(int n)
{

	if(i/10!=0)
	{
		putchar(i%10);
		printnumber((i-i%10)/10);
	}

