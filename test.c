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

// sum function
int sum(int a, int b) {
    return a+b;
}

// sub function
int sub(int a, int b) {
    return a-b;
}

// mul function
int mul(int a, int b) {
    return a*b;
}

// div function
int div(int a, int b) {
    return a/b;
}

// mod function
int mod(int a, int b) {
    return a%b;
}

// main function
int main() {
    int a = 3;
    int b = 6;
    sayHello();
    printf("Before: a=%d b=%d \n", a, b);
    swap(&a, &b);
    printf("After : a=%d b=%d \n", a, b);
    printf("Sum of a and b = %d\n", sum(a, b));
    printf("Sub of a and b = %d\n", sub(a, b));
    printf("Mul of a and b = %d\n", mul(a, b));
    printf("Div of a and b = %d\n", div(a, b));
    printf("Mod of a and b = %d\n", mod(a, b));
    return 0;
}