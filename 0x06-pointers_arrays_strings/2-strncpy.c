#include "main.h"

/**
 * _strncpy - to copy a string with n
 * @dest: copying to
 * @src: copying from
 * @n: number of char to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
