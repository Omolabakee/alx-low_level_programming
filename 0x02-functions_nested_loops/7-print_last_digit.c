#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: An integer
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	_putchar('0' + lastDigit);

	return (lastDigit);
}
