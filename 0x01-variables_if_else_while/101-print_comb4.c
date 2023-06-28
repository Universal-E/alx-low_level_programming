#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: 0 (success)
 */

int main(void)

{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
		for (c = b + 1; c <= 9; c++)
		{
		putchar('0' + a);
	putchar('0' + b);
	putchar('0' + c);
if (a < 7 || b < 8 || c < 9)
{
	putchar(',');
	putchar(' ');
}
}
}
}
	putchar('\n');
	return (0);
}
