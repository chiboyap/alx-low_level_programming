<<<<<<< HEAD
#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: input
 * @src: input
 * @n: input
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
=======
#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: input
 * @src: input
 * @n: input
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
>>>>>>> e1ad1101524b00818f034d5ecc8aba6d313737b7
