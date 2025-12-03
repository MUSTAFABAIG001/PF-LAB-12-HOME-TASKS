#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    char *result;

    printf("Enter first string: ");
    fgets(s1, 100, stdin);
    s1[strcspn(s1, "\n")] = 0;

    printf("Enter second string: ");
    fgets(s2, 100, stdin);
    s2[strcspn(s2, "\n")] = 0;

    result = (char*)malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
    if (result == NULL) return 1;

    strcpy(result, s1);
    strcat(result, s2);

    printf("Concatenated Result: %s\n", result);

    free(result);
    return 0;
}
