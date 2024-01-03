#include "main.h"
#include <stdio.h>

/**
 * swap_int -function that swaps two integers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

