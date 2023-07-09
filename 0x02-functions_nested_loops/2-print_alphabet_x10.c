#include "main.h"

/**
 * print_alphabet_x10 - Display lowercase alphabet
 * 10 repeated times
 * Return: void
 */

void print_alphabet_x10(void)

{
	char cha;
	int a;

	a = 0;

	while (a < 10)
	{
		cha = 'a';
		while (cha <= 'z')
		{
			_putchar(cha);
			cha++;
		}
		_putchar('\n');
		a++;
	}
}
