#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    float marks;
};

int main() {
    int n, i;
    struct Student *students;

    printf("Enter number of students: ");
    scanf("%d", &n);

    students = (struct Student*)malloc(n * sizeof(struct Student));

    for (i = 0; i < n; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        fflush(stdin);
        gets(students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
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
