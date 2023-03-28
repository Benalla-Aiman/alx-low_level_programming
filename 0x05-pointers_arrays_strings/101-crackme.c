#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the 101-crackme program
 *
 * Return: 0
 */
int main(void)
{
    int sum = 0;
    char c;

    srand(time(0));

    while (sum < 2772 - 127)
    {
        c = rand() % 127;
        if (c > 32)
        {
            putchar(c);
            sum += c;
        }
    }
    putchar(2772 - sum);

    return (0);
}
