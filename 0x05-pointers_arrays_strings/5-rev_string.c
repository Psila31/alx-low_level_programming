#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, len;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		len--;
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
	}
}
