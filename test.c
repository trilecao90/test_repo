#include <stdio.h>
#include "test.h"

// function to swap two integer numbers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 5;
    int b = 3;
    printf("Before: a=%d b=%d \n", a, b);
    swap(&a, &b);
    printf("After : a=%d b=%d \n", a, b);
    return 0;
}