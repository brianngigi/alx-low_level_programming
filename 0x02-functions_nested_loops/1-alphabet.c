#include "main.h"

/**
 *print_alphabet -  Prints alphabets
 *Description: 'This function prints lowercase letters
 *Return:void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
	_putchar('\n');
}
