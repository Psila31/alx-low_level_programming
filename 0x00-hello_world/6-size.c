#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(S)\n", (usigned long)sizeof(a));
	printf("Size of a int: %lu byte(S)\n", (usigned long)sizeof(b));
	printf("Size of a long int: %lu byte(S)\n", (usigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(S)\n", (usigned long)sizeof(d));
	printf("Size of a float: %lu byte(S)\n", (usigned long)sizeof(f));
	return (0);
}
