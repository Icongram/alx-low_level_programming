#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * Numbers must be separated by ,, followed by a space
 * You can only use putchar and only 4 times without using char variable.
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
