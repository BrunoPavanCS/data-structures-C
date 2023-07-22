#include "array.h"
#include <stdio.h>
#include <stdlib.h>

array* create_array(int size) {
    array *v;
    v = (array*) malloc(sizeof(array));
    v->data = (int*) malloc(size*sizeof(int));
    v->n = 0;
    return v;
}      

void free_array(array *v) {
    free(v->data);
    free(v);
}  

void add_element(array *v, int x) {
    v->data[v->n] = x;
    v->n++;
}

void remove_element(array *v, int i) {
    v->data[i] = v->data[v->n - 1];
    v->n--;
}

int search(array *v, int x) {
    int i;
    for (i = 0; i < v->n; i++)
        if (v->data[i] == x) return i;
    return -1;
}

int access(array *v, int i) {
    return v->data[i];
}

int size(array *v) {
    return v->n;
}
