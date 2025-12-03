#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;
    int len, i;

    str = (char*)malloc(100 * sizeof(char));
    if (str == NULL) {
        return 1;
    }

    printf("Enter a line of text: ");
    fflush(stdin);
    gets(str);

    len = strlen(str);

    printf("Reversed string: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    free(str);
    return 0;
}
