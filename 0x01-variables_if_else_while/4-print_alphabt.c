#include <stdio.h>

/**
 * main - Prints lowercase alphabet with exemption of q and e
 * Return: 0 (Success)
 */

int main(void)

{
	char j;

	for (j = 'a'; j <= 'z'; j++)

	{
		if (j != 'q' && j != 'e')
		{
			putchar(j);
		}
	}
	putchar('\n');
	return (0);
}
