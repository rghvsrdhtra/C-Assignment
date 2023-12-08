#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks[5]; 
    float totalMarks;
    float averageMarks;
};

int main() {

    struct Student student;

    printf("Enter student name: ");
    scanf("%s", student.name);

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &student.marks[i]);
        student.totalMarks += student.marks[i];
    }

    student.averageMarks = student.totalMarks / 5.0;

    printf("\nMark Sheet\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);

    printf("Marks:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: %.2f\n", i + 1, student.marks[i]);
    }

    printf("Total Marks: %.2f\n", student.totalMarks);
    printf("Average Marks: %.2f\n", student.averageMarks);

    return 0;
}
