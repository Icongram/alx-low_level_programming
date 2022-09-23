#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 * Return: 1 if c is an alphabet( sucess), 0 otherwise,
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || ((c >= 'a' && c <= 'z'));
}
