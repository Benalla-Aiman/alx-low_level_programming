#include <stdio.h>
/**
* main - Prints the name of the program.
* @argc: The number of arguments passed to the program.
* @argv: An array of strings containing the arguments.
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
/* Suppress unused parameter warning */
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
