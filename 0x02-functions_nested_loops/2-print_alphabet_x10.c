#include "main.h"

/**
 * print_alphabet_x10 - Display lowercase alphabet 
 * 10 repeated times
 * Return: void
 */

void print_alphabet_x10(void)

{
	int alphabet = 0;
	int multiple;

	while (alphabet++ <= 9)
	{
		for (multiple = 'a'; multiple <= 'z'; multiple++)
		      
	_putchar(multiple);
		_putchar(10);
	}
}
