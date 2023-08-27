#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

#define NUM_STUDENTS 3

int main() {
    struct Student students[NUM_STUDENTS] = {
        {"Vaibhav", 101, 85.5},
        {"Nirmal", 102, 75.0},
        {"Ritesh", 103, 92.3},
    
    };

    printf("%-15s%-15s%-15s\n", "Name", "Roll Number", "Marks");
    printf("----------------------------------------\n");
    
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%-15s%-15d%-15.2f\n", students[i].name, students[i].rollNumber, students[i].marks);
    }

    return 0;
}
