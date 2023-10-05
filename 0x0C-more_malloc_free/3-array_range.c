#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * array_range - create an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, t;
	int *b;

	if (min > max)
		return (NULL);
	t = max - min + 1;
	b = malloc(sizeof(int) * t);
	if (b == NULL)
		return (NULL);
	for (i = 0; i < t; i++)
	{
		b[i] = min;
		min++;
	}
	return (b);
}
