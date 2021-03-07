#include <stdio.h>
#include "test.h"

// function to swap two integer numbers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// function to print "Hello world!"
void sayHello() {
    printf("Hello world!\n");
}

int main() {
    int a = 5;
    int b = 3;
    sayHello();
    printf("Before: a=%d b=%d \n", a, b);
    swap(&a, &b);
    printf("After : a=%d b=%d \n", a, b);
    return 0;
}