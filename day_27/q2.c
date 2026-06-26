// Write a program to Create employee management system. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "employees.txt"
#define TEMP_FILE "temp.txt"

// Define the Employee structure
struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

// Function prototypes
void addEmployee();
void displayEmployees();
void searchEmployee();
void modifyEmployee();
void deleteEmployee();
void clearInputBuffer();

int main() {
    int choice;

    while (1) {
        printf("\n=================================");
        printf("\n=== EMPLOYEE MANAGEMENT SYSTEM ===");
        printf("\n=================================");
        printf("\n1. Add Employee Record");
        printf("\n2. Display All Records");
        printf("\n3. Search Employee Record");
        printf("\n4. Modify Employee Record");
        printf("\n5. Delete Employee Record");
        printf("\n6. Exit");
        printf("\nEnter your choice (1-6): ");
        
        if (scanf("%d", &choice) != 1) {
            printf("\nInvalid input! Please enter a number.\n");
            clearInputBuffer();
            continue;
        }

        switch (choice) {
            case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: searchEmployee(); break;
            case 4: modifyEmployee(); break;
            case 5: deleteEmployee(); break;
            case 6: 
                printf("\nExiting the system. Goodbye!\n");
                exit(0);
            default: 
                printf("\nInvalid choice! Please select between 1 and 6.\n");
        }
    }
    return 0;
}

// Clear leftover newline characters from input stream
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// 1. Create: Add a new employee record to the file
void addEmployee() {
    FILE *fp = fopen(FILE_NAME, "a");
    if (fp == NULL) {
        printf("\nError opening file!\n");
        return;
    }

    struct Employee emp;
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp.id);
    clearInputBuffer();

    printf("Enter Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = 0; // Remove trailing newline

    printf("Enter Department: ");
    fgets(emp.department, sizeof(emp.department), stdin);
    emp.department[strcspn(emp.department, "\n")] = 0;

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    // Write formatted data into the text file
    fprintf(fp, "%d|%s|%s|%.2f\n", emp.id, emp.name, emp.department, emp.salary);
    fclose(fp);

    printf("\nRecord added successfully!\n");
}

// 2. Read: Display all data from the text file
void displayEmployees() {
    FILE *fp = fopen(FILE_NAME, "r");
    if (fp == NULL) {
        printf("\nNo records found! Add some profiles first.\n");
        return;
    }

    struct Employee emp;
    printf("\n%-10s %-20s %-20s %-10s\n", "ID", "Name", "Department", "Salary");
    printf("------------------------------------------------------------------\n");

    // Read and parse pipe-separated tokens until end of file
    while (fscanf(fp, "%d|%[^|]|%[^|]|%f\n", &emp.id, emp.name, emp.department, &emp.salary) != EOF) {
        printf("%-10d %-20s %-20s %-10.2f\n", emp.id, emp.name, emp.department, emp.salary);
    }
    fclose(fp);
}

// 3. Read: Search for a specific employee by ID
void searchEmployee() {
    FILE *fp = fopen(FILE_NAME, "r");
    if (fp == NULL) {
        printf("\nNo records found!\n");
        return;
    }

    int searchId, found = 0;
    struct Employee emp;

    printf("\nEnter Employee ID to search: ");
    scanf("%d", &searchId);

    while (fscanf(fp, "%d|%[^|]|%[^|]|%f\n", &emp.id, emp.name, emp.department, &emp.salary) != EOF) {
        if (emp.id == searchId) {
            found = 1;
            printf("\nRecord Found!");
            printf("\nID: %d", emp.id);
            printf("\nName: %s", emp.name);
            printf("\nDepartment: %s", emp.department);
            printf("\nSalary: %.2f\n", emp.salary);
            break;
        }
    }

    if (!found) {
        printf("\nEmployee with ID %d not found.\n", searchId);
    }
    fclose(fp);
}

// 4. Update: Modify an existing record using a temporary file
void modifyEmployee() {
    FILE *fp = fopen(FILE_NAME, "r");
    FILE *ftemp = fopen(TEMP_FILE, "w");

    if (fp == NULL || ftemp == NULL) {
        printf("\nError accessing files!\n");
        return;
    }

    int targetId, found = 0;
    struct Employee emp;

    printf("\nEnter Employee ID to modify: ");
    scanf("%d", &targetId);

    while (fscanf(fp, "%d|%[^|]|%[^|]|%f\n", &emp.id, emp.name, emp.department, &emp.salary) != EOF) {
        if (emp.id == targetId) {
            found = 1;
            clearInputBuffer();
            printf("\nEnter New Name: ");
            fgets(emp.name, sizeof(emp.name), stdin);
            emp.name[strcspn(emp.name, "\n")] = 0;

            printf("Enter New Department: ");
            fgets(emp.department, sizeof(emp.department), stdin);
            emp.department[strcspn(emp.department, "\n")] = 0;

            printf("Enter New Salary: ");
            scanf("%f", &emp.salary);
        }
        // Write back either modified or unchanged elements
        fprintf(ftemp, "%d|%s|%s|%.2f\n", emp.id, emp.name, emp.department, emp.salary);
    }

    fclose(fp);
    fclose(ftemp);

    remove(FILE_NAME);
    rename(TEMP_FILE, FILE_NAME);

    if (found) {
        printf("\nRecord updated successfully!\n");
    } else {
        printf("\nEmployee with ID %d not found.\n", targetId);
    }
}

// 5. Delete: Filter out a target ID using a temporary file
void deleteEmployee() {
    FILE *fp = fopen(FILE_NAME, "r");
    FILE *ftemp = fopen(TEMP_FILE, "w");

    if (fp == NULL || ftemp == NULL) {
        printf("\nError accessing files!\n");
        return;
    }

    int targetId, found = 0;
    struct Employee emp;

    printf("\nEnter Employee ID to delete: ");
    scanf("%d", &targetId);

    while (fscanf(fp, "%d|%[^|]|%[^|]|%f\n", &emp.id, emp.name, emp.department, &emp.salary) != EOF) {
        if (emp.id == targetId) {
            found = 1; // Skip writing this line to drop it
            continue;
        }
        fprintf(ftemp, "%d|%s|%s|%.2f\n", emp.id, emp.name, emp.department, emp.salary);
    }

    fclose(fp);
    fclose(ftemp);

    remove(FILE_NAME);
    rename(TEMP_FILE, FILE_NAME);

    if (found) {
        printf("\nRecord deleted successfully!\n");
    } else {
        printf("\nEmployee with ID %d not found.\n", targetId);
    }
}