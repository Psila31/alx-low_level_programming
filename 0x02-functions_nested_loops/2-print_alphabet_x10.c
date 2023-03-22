#include "main.h"
/**
 * print_alphabet_x10 -  Prints the alphabet 10 times in lowercase
 *
 * return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	int k;
	
	for (k = 0; k < 10; k++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
