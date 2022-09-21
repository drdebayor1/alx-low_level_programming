#include "main.h"
#include <stdio.h>

/**
 *puts_half - prints every other character of a string
 *@str: A pointer to an integer that will be changed
 *
 *Return: void which means our answer is correct
 */
void puts_half(char *str)
{
	int l, n;

	for (l = 0; str[l] != '\0'; l++)
		if (l % 2 == 0)
		{
			for (n = l / 2; str[n] != '\0'; n++)
				_putchar(str[n]);
		} else
		{
			for (n = ((l - 1) / 2) + 1; str[n] != '\0'; n++)
				_putchar(str[n]);
		}
}
