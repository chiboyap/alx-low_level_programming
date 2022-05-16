#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings, followed by a new line
 *
 * @separator: pointer to a constant separator
 * @n: start of input variables
 *
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list str_input;
unsigned int i;
char *str;

va_start(str_input, n);

for (i = 0; i < n; i++)
{
str = va_arg(str_input, char *);
if (str)
printf("%s", str);
else
printf("(nil)");

if (separator && i != n - 1)
printf("%s", separator);
}
printf("\n");
}
