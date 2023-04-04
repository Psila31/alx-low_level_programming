#include "main.h"
/**
 * _memset - Entry Point
 * @s: Starting address
 * @b: desired value
 * @n: bytes yo be changed
 *
 * Return: changed array with the new values of n
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
