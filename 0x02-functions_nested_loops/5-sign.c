#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: the int to check
 * Return: 1 and print + if n is > zero
 * 0 and print 0 if n is = zero
 * -1 and print - if n is < zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		-putchar('+');
		return (1);
	}else if (n = 0)
	{
		-putchar('0');
		return (0);
	}else if (n < 0)
	{
		-putchar('-');
		return (-1);
	}
