#include "main.h"
<<<<<<< HEAD

/**
 * _memset - Entry point
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: Always 0 (Success)
 */
	char *_memset(char *s, char b, unsigned int n)
	{
		unsigned int i;

		for (i = 0; i < n; i++)
			s[i] = b;
		return (s);
	}
=======
/**
 * _memset - fills memory with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
*(s + i) =  b;

return (s);
}
>>>>>>> e1ad1101524b00818f034d5ecc8aba6d313737b7
