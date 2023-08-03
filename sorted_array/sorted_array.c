#include "sorted_array.h"
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

// insertion time is now made in O(n)
void add_element(array *v, int x) {
    int i;
    for(i = v->n-1; i>=0 && v->data[i] > x; i--)
        v->data[i+1] = v->data[i];
    v->data[i+1] = x;
    v->n++;
}

// removal time is now made in O(n)
void remove_element(array *v, int i) {
    for(; i < (v->n)-1; i++)
        v->data[i] = v->data[i+1];
    (v->n)--; 
}

// because the array is sorted, binary search can be used O(lg(n))
int binary_search(int *data, int l, int r, int x){
    int m = (l+r)/2;
    if(l > r) return -1;
    if (data[m] == x) return m;
    else if (data[m] < x) return binary_search(data, m+1, r, x);
    else return binary_search(data, l, m-1, x);
}

int search(array *v, int x) {
    return binary_search(v->data, 0, v->n, x);
}

int access(array *v, int i) {
    return v->data[i];
}

int size(array *v) {
    return v->n;
}
