#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the values of two integers a and b
 *@a: A pointer to an integer that will be updated
 *@b: B pointer to an integer that will be updated
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
