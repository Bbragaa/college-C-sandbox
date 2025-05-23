#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    int array[5] = {10, 20, 30, 40, 50};
    int *ptr;
    ptr = &array[0];

    printf ("Elementos do Aray: ");
    for (size_t i = 0; i < 5; i++) {
        printf(" %d", *(ptr + i));
    } 

    return 0;
}
