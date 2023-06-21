#include <stdio.h>

__attribute__ ((visibility ("default"))) int add(int a, int b) {
    return a + b;
}

__attribute__ ((visibility ("default"))) int sub(int a, int b) {
    return a - b;
}

__attribute__ ((visibility ("default"))) int mul(int a, int b) {
    return a * b;
}

__attribute__ ((visibility ("default"))) int div(int a, int b) {
    if (b != 0)
        return a / b;
    else
        return 0; // or whatever you want to return if b is zero
}

__attribute__ ((visibility ("default"))) int mod(int a, int b) {
    if (b != 0)
        return a % b;
    else
        return 0; // or whatever you want to return if b is zero
}
