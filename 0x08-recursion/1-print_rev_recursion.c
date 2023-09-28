#include "main.h"

/**
 * print_rev_recursion - print string in reverse
 * @s: string to reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		return (0);
}