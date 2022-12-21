#include <stdio.h>
/**
 * _strlen - returns the length of a string 
 * @s: pointer string
 *
 * Returns: string lenth
 */
int _strleng(char *s)
{
	int count = 0;

	for (; *s != '\0'; s++)
	{
		count++;
	}
	return (count);
}
