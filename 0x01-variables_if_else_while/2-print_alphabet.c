#include <stdio.h>

/**
 * main - prints alpabets in lowercase
 * Return: 0 (success)
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
		int j;
	for (j = 0; j < 27; j++)
	{
		putchar(alp[j]);
	}
	putchar('\n');
	return (0);
}
