#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    float marks;
};

int main() {
    int n, i;
    struct Student *students;

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar(); 

    students = (struct Student*)malloc(n * sizeof(struct Student));

    for (i = 0; i < n; i++) {
        printf("Enter name for student %d: ", i + 1);
        fgets(students[i].name, 50, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
        getchar(); 
    }

    printf("\nStudents with more than 75 marks:\n");
    for (i = 0; i < n; i++) {
        if (students[i].marks > 75) {
            printf("%s (%.2f)\n", students[i].name, students[i].marks);
        }
    }

    free(students);
    return 0;
}
