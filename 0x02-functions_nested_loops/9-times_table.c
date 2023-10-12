#include "main.h"

/**
 * times_table - print the 9 times table in a specific format
 *
 *
 * Return: 0
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int result = i * j;

			if (result < 10)
			{
				_putchar('0' + result);
			}
			else
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}

			if (j < 9)
			{
				_putchar(',');
				for (k = 0; k < 2; k++)
				{
					_putchar('.');
				}
			}
			else
			{
				_putchar('$');
			}
		}
		_putchar('\n');
	}
}
