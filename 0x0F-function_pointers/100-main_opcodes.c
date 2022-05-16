#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * main - this print opcodes of its own main function
 * @argc: the number of arguments
 * @argv: the vector of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	register int i, num;
	char *ptr = (char *)main;

	if (argc != 2)
		printf("Error\n"), exit(1);
	num = atoi(argv[1]);
	if (num < 0)
		printf("Error\n"), exit(2);
	for (i = 0; i < num - 1; i++)
		printf("%02hhx ", ptr[i]);
	printf("%02hhx\n", ptr[i]);
	return (0);
}