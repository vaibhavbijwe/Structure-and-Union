#include <stdio.h>
#include <string.h>

// Define the Employee structure
struct Employee {
    int id;
    char name[50];
    float salary;
};

// Function to display employee details
void displayEmployee(struct Employee emp) {
    printf("Employee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Salary: %f\n", emp.salary);
}

int main() {
    // Create an instance of the Employee structure
    struct Employee emp1;
    emp1.id = 1;
    strcpy(emp1.name, "Vaibhav");
    emp1.salary = 5000.0;

    // Call the function and pass the Employee structure by value
    displayEmployee(emp1);

    return 0;
}
