#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: memory stored
 * @src: memory to be copied
 * @n: number of bytes
 *
 * Return: copied memory with n value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = 0;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
