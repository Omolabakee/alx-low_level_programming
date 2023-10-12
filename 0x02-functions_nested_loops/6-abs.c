#include "main.h"

/**
 * _abs - Compute the absolute value of an integer.
 *
 *  @n: An integer.
 *
 *  Return: The absolute value of the integer 'n'.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
