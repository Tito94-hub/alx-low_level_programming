#include "main.h"

/**
 * print -line - print straight line on the terminal
 * @n: numbers of times the character '_' will be printed
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
			_putchar('_');
		putchar('\n');
	}
}
