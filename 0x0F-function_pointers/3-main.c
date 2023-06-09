#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* main - entry point of the program.
* @argc: the number of arguments passed to the program.
* @argv: an array of strings containing the arguments passed to the program.
*
* Return: 0 if successful, 98 if the number of arguments is incorrect,
* 99 if an invalid operator is given, or 100 if there's a division by zero.
*/
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*op_func)(int, int);
if (argc != 4)
{
printf("Error\n");
return (98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
op_func = get_op_func(argv[2]);
if (op_func == NULL || argv[2][1] != '\0')
{
printf("Error\n");
return (99);
}
if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
{
printf("Error\n");
return (100);
}
result = op_func(num1, num2);
printf("%d\n", result);
return (0);
}
