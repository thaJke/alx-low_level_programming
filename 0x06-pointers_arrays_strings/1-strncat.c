#include <stdio.h>

/**
 * _strncat - Joins to strings together
 * @dest: The destination value
 * @src: The source value
 * @n: the limit of the concatinating
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, j = 0;

	while (dest[len])
	{
		len++
	}

	while (j < n && src[j])
	{
		dest[len] = src[j];
		len++;
		j++
	}

	dest[len + n + 1] = '\0';

	return (dest);
}
