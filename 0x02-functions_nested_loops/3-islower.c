#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: character that needs to be checked
 *
 * Return: 0 if upper, 1 if lower
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
