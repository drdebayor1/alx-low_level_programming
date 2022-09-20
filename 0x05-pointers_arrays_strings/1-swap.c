#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Description: using the main function
 * this program prints "reset to 98"
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
  int c = *a;
  *a = *b;
  *b = c;
}
