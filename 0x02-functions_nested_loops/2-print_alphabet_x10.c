#include "main.h"
/**
 * print_alphabet_x10 - Make alphabet x10 times
 */

void print_alpabet_x10(void)
{
	char ch;
	int i;
	i = 0;

	while (i < 10)
	{

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
			ch++
		}
		_putchar('\n');
		i++;
	}
}
