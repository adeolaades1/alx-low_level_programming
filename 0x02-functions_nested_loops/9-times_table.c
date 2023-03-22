#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0
 * b = row, c = column, d = digits of current result
 * Return: times table
 * add extre space past single digit
 */
void times_table(void)
{
	int b, c, d;

	for (b = 0; b <= 9; b++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c = 1; c <= 9; c++)
		{
			d = (b * c);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
