#include <stdio.h>
/**
* premain - function that is executed before main
*
* This function is decorated with the constructor attribute,
* which specifies that it should be executed before the main function.
* It prints a message using printf.
*/
void __attribute__ ((constructor)) premain()
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
