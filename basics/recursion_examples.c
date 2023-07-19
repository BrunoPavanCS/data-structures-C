#include <stdio.h>

//prototypes
int factorial (int n);
int power(int a, int b);
int fib (int n);
int iterative_fib (int n);

//main
int main () {

    int x = factorial(5);
    int y = power(2,5);
    int z = iterative_fib(6);
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    return 0;
}

//always determine a base case(a condition to stop the recursive calls of the function) and a general case(a rule)

int factorial (int n) {
    //base case
    if (n==0)
        return 1;
    //general case
    else
        return n * factorial(n-1);
}

int power (int a, int b) {
    //base case
    if (b==0)
        return 1;
    //general case
    else 
        return a * power(a, b-1);
}

//bad usage of recursion -> a lot of wasted and repetitive calls(see recursion tree)
int fib (int n) {
    //base case
    if (n==0) return 0;
    if (n==1) return 1;
    //general case
    else 
        return fib(n-1) + fib(n-2);
}

//better solution -> iterative approach(no recursion)
int iterative_fib (int n) {
    if (n==0) 
        return 0;
    int prev, curr, next, i;
    prev = curr = 1;
    for(i = 3; i <= n; i++){
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}