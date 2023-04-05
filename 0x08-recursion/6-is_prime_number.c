int check_prime(int n, int i);
/**
* is_prime_number - checks if a number is prime
* @n: the number to check
*
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
if (n < 2) /* numbers less than 2 are not prime */
return (0);
return (check_prime(n, 2));
}
/**
* check_prime - recursive helper function to check if a number is prime
* @n: the number to check
* @i: the current divisor to check
*
* Return: 1 if n is prime, 0 otherwise
*/
int check_prime(int n, int i)
{
if (n == i) /* base case, n is only divisible by itself */
return (1);
if (n % i == 0) /* n is divisible by i, not prime */
return (0);
return (check_prime(n, i + 1)); /* check next divisor */
}
