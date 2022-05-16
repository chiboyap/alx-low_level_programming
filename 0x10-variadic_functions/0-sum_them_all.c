#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - sum_them_all
*
*@n: length of parameter
*
*Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{

va_list nums;
unsigned int i = 0, sum = 0;

if (n == 0){
  return (0);
}

va_start(nums, n);

while(i <= n)
{
sum += va_arg(nums, int);
i++;
}
va_end(nums);

return (sum);
}
