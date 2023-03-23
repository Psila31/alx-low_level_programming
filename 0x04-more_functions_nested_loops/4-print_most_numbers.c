#include "main.h"
/**
 * print_most_numbers - prints number 0 to 9 except for 2 and 4
 * @c: char to be checked
 * Return: 0
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 58; a++)
	{
		if (a != 50 || a != 52)
		{
			_putchar(a);
		}
	}
	_putchar('\n');

	return (0);
}
