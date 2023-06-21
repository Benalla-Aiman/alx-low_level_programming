// File: rand.c
#include <stdlib.h>

static int index = 0;
static int numbers[6] = {9, 8, 10, 24, 75, 9};

int rand() {
    if (index > 5)
        index = 0;
    return numbers[index++];
}
