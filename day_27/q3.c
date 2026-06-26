// Write a program to Create salary management system. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to hold employee and salary data
struct Employee {
    int id;
    char name[50];
    float basic_salary;
    float hra;
    float da;
    float pf;
    float gross_salary;
    float net_salary;
};

// Function prototypes
void addEmployee();
void displayAllEmployees();
void searchEmployee();
void calculateSalary(struct Employee *emp);

int main() {
    int choice;

    while (1) {
        printf("\n=========================================\n");
        printf("       SALARY MANAGEMENT SYSTEM          \n");
        printf("=========================================\n");
        printf("1. Add New Employee & Calculate Salary\n");
        printf("2. Display All Employee Records\n");
        printf("3. Search Employee Payslip\n");
        printf("4. Exit\n");
        printf("=========================================\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayAllEmployees();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                printf("Exiting system. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
        }
    }
    return 0;
}

// Helper function to calculate salary components
void calculateSalary(struct Employee *emp) {
    // Standard calculation formulas
    emp->hra = emp->basic_salary * 0.20; // 20% of Basic
    emp->da = emp->basic_salary * 0.10;  // 10% of Basic
    emp->pf = emp->basic_salary * 0.12;  // 12% of Basic

    emp->gross_salary = emp->basic_salary + emp->hra + emp->da;
    emp->net_salary = emp->gross_salary - emp->pf;
}

// Function to add a new employee and append to file
void addEmployee() {
    struct Employee emp;
    FILE *fp = fopen("employeedata.txt", "a");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\n--- Enter Employee Details ---\n");
    printf("Employee ID: ");
    scanf("%d", &emp.id);
    printf("Name: ");
    scanf(" %[^\n]s", emp.name); // Reads string with spaces
    printf("Basic Salary: ");
    scanf("%f", &emp.basic_salary);

    calculateSalary(&emp);

    // Writing to file
    fprintf(fp, "%d\n%s\n%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n", 
            emp.id, emp.name, emp.basic_salary, emp.hra, emp.da, emp.pf, emp.gross_salary, emp.net_salary);
    
    fclose(fp);
    printf("Employee added and salary details saved successfully!\n");
}

// Function to read and display all records from the file
void displayAllEmployees() {
    struct Employee emp;
    FILE *fp = fopen("employeedata.txt", "r");

    if (fp == NULL) {
        printf("\nNo records found or file does not exist.\n");
        return;
    }

    printf("\n\t\t--- ALL EMPLOYEE RECORDS ---\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("ID\tName\t\tBasic\t\tHRA\t\tDA\t\tNet Pay\n");
    printf("--------------------------------------------------------------------------------\n");

    while (fscanf(fp, "%d\n %[^\n]s\n%f\n%f\n%f\n%f\n%f\n%f\n", 
                  &emp.id, emp.name, &emp.basic_salary, &emp.hra, &emp.da, &emp.pf, &emp.gross_salary, &emp.net_salary) != EOF) {
        printf("%d\t%-15s\t%.2f\t%.2f\t%.2f\t%.2f\n", emp.id, emp.name, emp.basic_salary, emp.hra, emp.da, emp.net_salary);
    }

    fclose(fp);
}

// Function to search for an employee and print a payslip
void searchEmployee() {
    struct Employee emp;
    int searchId, found = 0;
    FILE *fp = fopen("employeedata.txt", "r");

    if (fp == NULL) {
        printf("\nNo records found or file does not exist.\n");
        return;
    }

    printf("\nEnter Employee ID to search: ");
    scanf("%d", &searchId);

    while (fscanf(fp, "%d\n %[^\n]s\n%f\n%f\n%f\n%f\n%f\n%f\n", 
                  &emp.id, emp.name, &emp.basic_salary, &emp.hra, &emp.da, &emp.pf, &emp.gross_salary, &emp.net_salary) != EOF) {
        if (emp.id == searchId) {
            found = 1;
            printf("\n\n=========================================\n");
            printf("             PAYSLIP DETAILED            \n");
            printf("=========================================\n");
            printf("Employee ID   : %d\n", emp.id);
            printf("Employee Name : %s\n", emp.name);
            printf("-----------------------------------------\n");
            printf("Basic Salary  : %.2f\n", emp.basic_salary);
            printf("HRA (20%%)     : %.2f\n", emp.hra);
            printf("DA (10%%)      : %.2f\n", emp.da);
            printf("-----------------------------------------\n");
            printf("Gross Salary  : %.2f\n", emp.gross_salary);
            printf("PF Deduction  : %.2f\n", emp.pf);
            printf("-----------------------------------------\n");
            printf("NET SALARY    : %.2f\n", emp.net_salary);
            printf("=========================================\n");
            break;
        }
    }

    if (!found) {
        printf("\nEmployee with ID %d not found.\n", searchId);
    }

    fclose(fp);
}