#include <stdio.h>

typedef struct date {
    int day;
    int month;
    int year;
} t_date;

/* pointers as data of structs */ 

typedef struct reg{
    int *ptr1, *ptr2;
} t_reg;

int main () {

    /* pointers to structs */ 

    t_date today;
    t_date *p = &today;

    // indirect access via pointers is a little different
    p->day = 7; // today.day = 7;
    // this also works, but it's more uncommon
    // parenthesis are necessary because the . operator has more priority than the operator *
    (*p).day = 7;
    p->month = 7;
    p->year = 2023;

    printf("Today is: %d/%d/%d\n", today.day, today.month, today.year);

    printf("-------------------------\n");

    int i1 = 0, i2 = 100;

    t_reg reg;
    reg.ptr1 = &i1;
    reg.ptr2 = &i2;

    *reg.ptr1 = -2; // equivalent to *(reg.ptr1) = -2, precedence of . is higher than *

    printf("i1 = %d, *reg.ptr1 = %d\n", i1, *reg.ptr1);
    printf("i2 = %d, *reg.ptr2 = %d\n", i2, *reg.ptr2);

    return 0;
}