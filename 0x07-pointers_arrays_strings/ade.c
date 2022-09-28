#include "main.h"
/**
 *_memset - fills memory with a constant byte
 *@s: pointer block off memory to fill
 *@b: vaue to be set
 *@n: bytes of the memory
 *Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/*Declaring for*/
	for (i = 0; i < n; i++)
	{
		*(s + 1) = b; 
	
		/*Add 1 position s*/
	}
	/*End for*/

	Return (s);
}
