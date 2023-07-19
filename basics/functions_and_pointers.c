#include <stdio.h>

/* utilizing passage by reference to change the actual value of a variable(in main) and not just make a copy */

// prototypes
void add_1(int *a);
void swap (int *a, int *b);
int *max(int *a, int *b);

int main () {

    int a = 0;
    add_1(&a);
    printf("%d\n", a);

    printf("----\n");

    int x = 10, y = 5;
    swap(&x, &y);
    printf("%d\n", x);
    printf("%d\n", y);

    printf("----\n");

    int *p = NULL;
    p = max(&x, &y);
    printf("%d\n", *p);
    *p = -1;
    printf("%d\n", *p);
    printf("%d\n", y);

    return 0;
}

void add_1(int *a) {
    *a = *a + 1;
}

void swap (int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

// functions can also return pointers
int *max(int *a, int *b){
    if (*a > *b)
        return a;
    else 
        return b;
}