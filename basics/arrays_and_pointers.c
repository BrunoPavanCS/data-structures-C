#include <stdio.h>

int sum(int *v, int n);

int main () {

    /* pointers and arrays */

    int v[10];
    int *ptr1;
    // pointer to a single array position
    ptr1 = &v[2];

    int *ptr2;
    // v == &v[0], so an easier way to point to the array(first position) is:
    ptr2 = v; // ptr2 = &v[0];

    *ptr2 = 5; // changing v[0] indirectly
    printf("%d\n", v[0]);

    // arrays occupate consecutive positions in memory
    // it is possible to use pointer arithmetic to go through positions of the array
    // if p points to &v[i], then p+j points to &v[i+j]
    int *ptr3 = v;
    ptr3 = ptr3 + 2;
    *ptr3 = 10;
    printf("%d\n", v[2]);
    // using pointer arithmetic and the fact that v == &v[0]:
    // *(v + i) == v[i]
    // (v + i) == &v[i]

    // when arrays are parameters to functions, the passage is by reference, 
    // so the function does not make a copy of it(like a normal variable)
    // note sum function as an example


    /* pointers to pointers */

    char i, *p;
    p = &i;
    char **q;
    q = &p;
    **q = 'a'; // same as: *p = 'a';

    printf("%c\n", i);

    return 0;
}

int sum(int *v, int n){ // *v == v[] in parameters
    int i, sum_;
    // use it normally inside the function 
    for (i = 0; i < n; i++) {
        sum_ += v[i];
    }
    return sum_;
}