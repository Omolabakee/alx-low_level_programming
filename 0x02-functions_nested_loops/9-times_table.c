#include "main.h"

/**
 * print_number - print times table
 * times_table - print the 9 times table
 *
 * @n: integer
 *
 * Return: 0
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{

		int digit = n % 10;

		if (n >= 10)
		{
			print_number(n / 10);
		}
		_putchar('0' + digit);
	}
}


void times_table(void)
{

	int multiplier;
	int result;

	for (multiplier = 0; multiplier <= 9; multiplier++)
	{
		result = 9 * multiplier;

		_putchar('9');
		_putchar(' ');
		_putchar('x');
		_putchar(' ');

		print_number(multiplier);

		_putchar(' ');
		_putchar('=');
		_putchar(' ');

		print_number(result);

		_putchar('\n');
	}
}
