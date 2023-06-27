#include <stdio.h>

/**
 * main - prints reverse lowercase alphabet
 * Return: 0 (Succes)
 */

int main(void)

{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
	putchar(a);
	}
putchar('\n');
return (0);
}
