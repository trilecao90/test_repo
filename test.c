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

// main function
int main() {
    int a = 5;
    int b = 3;
    int c = 7;
    sayHello();
    printf("Before: a=%d b=%d \n", a, b);
    swap(&a, &b);
    swap(&a, &c);
    printf("After : a=%d b=%d \n", a, b);
    return 0;
}