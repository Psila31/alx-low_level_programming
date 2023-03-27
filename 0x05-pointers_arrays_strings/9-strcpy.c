#include "main.h"
/**
 * _strcpy - copies the string
 * @src: input
 * @dest: output
 * return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';

	return (dest);
}
