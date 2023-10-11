#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: character that needs to be checked
 *
 * Return: 0 if zero, 1 if greater than zero, -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar('\n');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar('\n');
		return (-1);
	}
}
