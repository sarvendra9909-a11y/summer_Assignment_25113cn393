// Write a program to Create student record management system. 
#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float gpa;
};

void addStudent(struct Student s[], int *count) {
    printf("Enter ID: ");
    scanf("%d", &s[*count].id);
    printf("Enter Name: ");
    scanf(" %[^\n]s", s[*count].name);
    printf("Enter GPA: ");
    scanf("%f", &s[*count].gpa);
    (*count)++;
    printf("Student added successfully!\n");
}

void displayStudents(struct Student s[], int count) {
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, GPA: %.2f\n", s[i].id, s[i].name, s[i].gpa);
    }
}

int main() {
    struct Student s[100];
    int count = 0;
    addStudent(s, &count);
    displayStudents(s, count);
    return 0;
}