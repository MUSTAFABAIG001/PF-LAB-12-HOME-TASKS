#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5, i;
    int *ptr;

    ptr = (int*)calloc(n, sizeof(int));
    if (ptr == NULL) return 1;

    printf("Array values after calloc: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    for (i = 0; i < n; i++) {
        ptr[i] = (i + 1) * 10;
    }

    printf("Modified array values: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);
    printf("Memory freed.\n");

    ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL) return 1;

    printf("Same pointer reused with malloc: ");
    for (i = 0; i < n; i++) {
        ptr[i] = i + 1;
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);
    return 0;
}
