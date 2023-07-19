#include <stdio.h>
#include <stdlib.h>

// prototypes
void freeArray (int **array, int n);

int main () {

    // malloc function
    // receives the number of bytes to be dynamically allocated in memory(heap)
    // returns an address of generic type(void*), so casting is needed
    // NULL is returned if the allocation does not happen correctly(no consecutive space in memory) -> checking is a good practice
    char *ptr;
    ptr = (char*) malloc(4);
    if (ptr==NULL) exit(EXIT_FAILURE);

    int *q = (int*) malloc(10*sizeof(int));

    //   |*p| -> |   |   |   |   |   |   |   |   |   |   |
    //             0   1   2   3   4   5   6   7   8   9     (array index)

    // free() is always required
    free(ptr);


    /* memory allocation for multidimensional arrays */
    
    int **p;
    int i;
    // example: 5 rows x 3 columns array
    // it is possible to access any value in the array normally as p[i][j]
    p = (int**) malloc(5*sizeof(int*));
    for (i = 0; i < 5; i++){
        p[i] = malloc(3*sizeof(int));
    }

    // realloc function -> alters(during the code execution) the size of memory block(bytes) that was dynamically allocated
    // receives the address of an allocated block of memory and the new number of bytes
    // if q parameter is NULL, the function works identically to malloc
    q = realloc(q, 20*sizeof(int));

    // if there isn't enough space to perform the new allocation, 
    // it's possible that the reference to the original space was lost,
    // in this case the previous space was deallocated and q could point to nothing
    // the behavior is uncertain
    int *a = (int*) realloc(q, 30*sizeof(int));

    // free() is always required
    free(a);

    return 0;
}

// n is the number of rows
void freeArray (int **array, int n) {
    int i;
    for (i = 0; i < n; i++)
        free(array[i]);         // releasing the dynamically allocated rows (array of integers)
    free(array);                // releasing the array of pointers itself
}