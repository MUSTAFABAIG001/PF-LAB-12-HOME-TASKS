#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;
    int len, i;

    str = (char*)malloc(100 * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter a line of text: ");
    
    
    fflush(stdin); 


    if (fgets(str, 100, stdin) != NULL) {
        
        str[strcspn(str, "\n")] = 0; 

        len = strlen(str);

        printf("Reversed string: ");
        for (i = len - 1; i >= 0; i--) {
            printf("%c", str[i]);
        }
        printf("\n");
    }

    free(str);
    return 0;
}
