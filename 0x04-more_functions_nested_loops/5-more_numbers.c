#include "main.h"

/**
 * more_numbers - prints 10 times the number, starting from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		j = 0;

		if (j <= 14)
		{
			_putchar(j + '0');
			j++;
		}
		_putchar('\n')
	}
}
