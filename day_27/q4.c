// Write a program to Create marksheet generation system. 
#include <stdio.h>

struct Marksheet {
    int rollNo;
    char name[50];
    float marks[5];
};

void generateMarksheet(struct Marksheet m) {
    float total = 0, percentage;
    for(int i = 0; i < 5; i++) total += m.marks[i];
    percentage = (total / 500) * 100;
    
    printf("\n--- Marksheet for %s ---\n", m.name);
    printf("Roll No: %d\nTotal Marks: %.2f / 500\nPercentage: %.2f%%\n", m.rollNo, total, percentage);
    if(percentage >= 40) printf("Result: PASS\n");
    else printf("Result: FAIL\n");
}

int main() {
    struct Marksheet student = {1, "Priya Singh", {85, 90, 78, 88, 92}};
    generateMarksheet(student);
    return 0;
}