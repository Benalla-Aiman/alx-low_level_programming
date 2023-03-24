#include <stdio.h>
int main(void)
{
long n = 612852475143;
long i, largest_factor;
for (i = 2; i * i <= n; i++)
{
while (n % i == 0)
{
largest_factor = i;
n /= i;
}
}
if (n > 1)
largest_factor = n;
printf("%ld\n", largest_factor);
return 0;
}
