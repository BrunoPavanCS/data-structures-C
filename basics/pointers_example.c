#include <stdio.h>

typedef struct {
    int x;
    int y;
} t_point;

typedef union {
    int x;
    int y;
} u_point;


int main () {
    
    // %ld -> placeholder for long unsigned int
    printf("%ld bytes\n", sizeof(t_point)); // 8 bytes
    printf("%ld bytes\n", sizeof(u_point)); // 4 bytes
    
    int i = 0;
    // addres in hexadecimal representation(easier to visualize) -> use %p as placeholder
    printf("%p\n", (void*)&i);

    printf("--------------\n");

    int vet[10];
    int j;
    // addresses of consecutive positions, considering it's an array
    // note hexadecimal values increase by 4 in each position, because an integer has 4 bytes
    for(j = 0; j < 10; j++){
        printf("%p\n", (void*)&vet[j]);
    }

    printf("--------------\n");

    int a,b;
    // good practice -> start pointer variables with NULL
    int *p = NULL, *q = NULL;

    b = 10;
    // then verify if the pointer is valid, in this case it isn't 
    if (p!=NULL) *p = 12;

    p = &b;
    // this means that q also points to b and *p == *q == 10
    q = p;
    printf("%d\n", b);
    printf("%d\n", *p);
    printf("%d\n", *q);

    *q = 100;
    printf("%d\n", b);
    printf("%d\n", *p);
    printf("%d\n", *q);
}