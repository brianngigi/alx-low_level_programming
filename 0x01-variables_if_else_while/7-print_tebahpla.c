#include <stdio.h>
/**
 * main - Entry point
 * *Description: 'Print base 10 numbers'
 * Return: Always 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
