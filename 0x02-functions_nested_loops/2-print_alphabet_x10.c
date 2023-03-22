#include "main.h"
/**
 * print_alphabet_x10 - entry point
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int k = 0;
	int i;

	while (k < 10)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		k++;
	}
}
