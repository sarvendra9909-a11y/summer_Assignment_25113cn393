// Write a program to Create quiz application.
#include <stdio.h>

int main() {
    int score = 0;
    int choice;

    printf("Welcome to the C Quiz!\n");

    // Question 1
    printf("\nQ1. What is the default return type of the main() function in C?\n");
    printf("1. void\n2. int\n3. char\n4. float\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 2) { score++; }

    // Question 2
    printf("\nQ2. Who is the father of C language?\n");
    printf("1. Bjarne Stroustrup\n2. James Gosling\n3. Dennis Ritchie\n4. Guido van Rossum\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 3) { score++; }

    // Final Score
    printf("\nQuiz Finished!\n");
    printf("Your final score is: %d/2\n", score);

    return 0;
}