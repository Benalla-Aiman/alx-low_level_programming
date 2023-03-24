#include <stdio.h>   /* for putchar function */
#include <stdlib.h>  /* for implicit declaration of _putchar function */
#include "main.h"    /* assuming that main.h contains other declarations */

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
    int i, j;

    i = 0;

    while (i < 24)
    {
        j = 0;
        while (j < 60)
        {
            putchar((i / 10) + '0');
            putchar((i % 10) + '0');
            putchar(':');
            putchar((j / 10) + '0');
            putchar((j % 10) + '0');
            putchar('\n');
            j++;
        }
        i++;
    }
}
