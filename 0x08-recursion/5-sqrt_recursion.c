#include "main.h"
#include <stdio.h>
int sqrt_helper(int n, int i);
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the number to find the square root of
*
* Return: the square root of n, or -1 if n does not have a natural square root
*/
int _sqrt_recursion(int n)
{
if (n < 0) /* negative numbers do not have natural square roots */
return (-1);
if (n == 0 || n == 1) /* base cases */
return (n);
return (sqrt_helper(n, 1));
}
/**
* sqrt_helper - helper function for _sqrt_recursion
* @n: the number to find the square root of
* @i: the current guess for the square root
*
* Return: the square root of n, or -1 if n does not have a natural square root
*/
int sqrt_helper(int n, int i)
{
if (i * i == n) /* found the square root */
return (i);
if (i * i > n) /* n does not have a natural square root */
return (-1);
return (sqrt_helper(n, i + 1)); /* try the next guess */
}
