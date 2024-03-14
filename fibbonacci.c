#include <stdio.h>

#define MAX_TERMS 50

struct Fibonacci {
    int terms[MAX_TERMS];
    int count;
};

void generateFibonacci(struct Fibonacci *fib, int limit) {
    int a = 0, b = 1, nextTerm;
    fib->count = 0;
    while (a <= limit) {
        fib->terms[fib->count++] = a;
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
}

void printFibonacci(struct Fibonacci fib) {
    int i;
    printf("Fibonacci series up to %d terms:\n", fib.count);
    for ( i = 0; i < fib.count; i++) {
        printf("%d ", fib.terms[i]);
    }
    printf("\n");
}

int main() {
    struct Fibonacci fib;
    int limit;

    printf("Enter the limit for Fibonacci series: ");
    scanf("%d", &limit);

    generateFibonacci(&fib, limit);
    printFibonacci(fib);

    return 0;
}



