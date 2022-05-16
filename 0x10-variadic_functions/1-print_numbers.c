#include<stdarg.h>
#include<stdio.h>
#include "variadic_functions.h"

/**
 *print_numbers - print numbers
 *
 *@separator: it is speparater
 *
 *@n: length
 *
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list nums;
va_start(nums, n);
while (i < n)
{
{
printf("%d", va_arg(nums, const unsigned int));
if (separator && i != n - 1)
printf("%s", separator);
}
i++;
}
va_end(nums);
printf("\n");
}
