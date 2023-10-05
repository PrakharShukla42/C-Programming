#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int i;
    ptr = (int *)malloc(50*sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        exit(1);
    }
    printf("Initial values:\n");
    for (i = 0; i < 50; i++) {
        ptr[i] = i;
        printf("%d ", ptr[i]);
    }
    printf("\n");
    ptr = (int *)realloc(ptr, 70 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory reallocation failed. Exiting...\n");
        exit(1);
    }
    printf("Updated values:\n");
    for (i = 50; i < 70; i++) {
        ptr[i] = i;
        printf("%d ", ptr[i]);
    }
    printf("\n");
    free(ptr);
    return 0;
}
