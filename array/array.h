// Data
typedef struct {
    int *data;     // pointer to the actual array address
    int n;         // stores the last valid position of the array (or last valid index + 1)
} array;

// Functions
array* create_array(int size);          // allocates an array and returns it's address
void free_array(array *v);              // deallocates a created array

void add_element(array *v, int x);      // adds element x to a created array, always at the end (tracked by n)
void remove_element(array *v, int i);   // removes element of index i, the last value will then be stored in this position
int search(array *v, int x);            // returns the index of element x, if x is not found the function returns -1

int access(array *v, int i);            // returns the element stored in index i
int size(array *v);                     // returns the size (based on the number of valid positions)