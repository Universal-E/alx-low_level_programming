#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0 (Success)
 */

int main(void)

{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			putchar('0' + a);
			putchar('0' + b);
		if (a < 8 || b < 9)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
