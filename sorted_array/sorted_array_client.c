#include <stdio.h>
#include "sorted_array.h"

int main () {

    array *v;
    v = create_array(100);

    int i, num;
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
        add_element(v,i);
    
    printf("%d", search(v, 5));
    printf("\n");

    while(size(v) != 0) {
        printf("%d - ", access(v, 0));
        remove_element(v, 0);
    }

    printf("END\n");

    free_array(v);

    return 0;
}