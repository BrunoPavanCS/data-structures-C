// Data
typedef struct {
    int *data;     
    int n;         
} array;

// Functions
array* create_array(int size);          
void free_array(array *v);              

void add_element(array *v, int x);      
void remove_element(array *v, int i);   
int search(array *v, int x);            

int access(array *v, int i);            
int size(array *v);                     