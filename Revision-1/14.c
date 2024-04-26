#include <stdio.h>

int main() {
    int subjectmarks[5];
    float total = 0.0;
    float marks;
    char grade;

    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d : ", i + 1);
        scanf("%d", &subjectmarks[i]);
        total += subjectmarks[i];
    }

    marks = total / 5.0;

    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("Average marks: %f\n", marks);
    printf("Grade: %c\n", grade);
}