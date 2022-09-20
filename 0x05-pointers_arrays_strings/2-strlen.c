#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Description: using the main function
 *
 * this program prints "count strings"
 * Return: Always 0
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; ++s)
		count++;

	return (count);
}
