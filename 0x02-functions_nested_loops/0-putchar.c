#include "main.h"
/**
 * main - prints _putchar
 * Description- write a code that prints _putchar
 * Return: Always 0
 */

int main(void)

{
	char *ch = "_putchar";

	while (*ch)

	{
		_putchar(*ch);
		chi++;
	}
	_putchar('\n');
	return (0);
}
