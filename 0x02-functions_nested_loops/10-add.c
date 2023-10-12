#include "main.h"

/**
 * add - adds two integers and returns the result
 *
 * @a: The first integer to be added
 *
 * @b: The second integer to be added
 *
 * Return: The sum of 'a' and 'b'
 */
int add(int a, int b)
{
	int result = a + b;

	if (result < 0)
	{
		_putchar('-');
		result = -result;
	}
	else if (result == 0)
	{
		_putchar('0');
	}
	return (a + b);
}
