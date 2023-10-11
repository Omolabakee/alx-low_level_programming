#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: character that needs to be checked
 *
 * Return: 0 if number, 1 if letter
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
