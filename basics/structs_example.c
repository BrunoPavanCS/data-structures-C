#include <stdio.h>

// using typedef to simplify declarations of structs
typedef struct product {
    int id, quantity;
    float price;
    char name[20];
} t_product;

typedef struct coord {
    int x;
    int y;
} t_coord;

int main () {

    t_product P, Q;

    P.quantity = 5;
    P.price = 10.50;
    
    // in scanf function -> & required for int, float, etc and not required for strings(%s)
    printf("Type product name: ");
    scanf("%s", P.name);
    printf("Type product id: ");
    scanf("%d", &P.id);

    printf("--------------------------\n");
    printf("Product name = %s\n", P.name);
    printf("Product id = %d\n", P.id);
    printf("Product quantity = %d\n", P.quantity);
    printf("Product price = %.2f\n", P.price);

    Q = P; //direct copy is possible

    // direct inicialization
    t_coord p1 = {220, 110};
    t_coord p2 = {100}; // y = 0 (not inicialized)
    printf("--------------------------\n");
    printf("Coordinates of p1: (%d,%d)\n", p1.x, p1.y);
    printf("Coordinates of p2: (%d,%d)\n", p2.x, p2.y);

    // making arrays of structs and using them in functions is also possible

    return 0;
}