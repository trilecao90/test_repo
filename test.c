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

int sum(int a, int b) {
    return a+b;
}

int sub(int a, int b) {
    return a-b;
}

int mul(int a, int b) {
    return a*b;
}

// main function
int main() {
    int a = 5;
    int b = 3;
    sayHello();
    printf("Before: a=%d b=%d \n", a, b);
    swap(&a, &b);
    printf("After : a=%d b=%d \n", a, b);
    printf("Sum of a and b = %d\n", sum(a, b));
    printf("Sub of a and b = %d\n", sub(a, b));
    printf("Mul of a and b = %d\n", mul(a, b));
    return 0;
}