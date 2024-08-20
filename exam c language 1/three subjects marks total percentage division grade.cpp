#include <stdio.h>
int main() {
    int roll_no;
    char name[50];
    float marks1, marks2, marks3;
    float total, percentage;
    char grade;

    
    printf("Enter Roll No: ");
    scanf("%d", &roll_no);

    printf("Enter Name: ");
    scanf(" %[^\n]s", name); 

    printf("Enter Marks for Maths: ");
    scanf("%f", &marks1);

    printf("Enter Marks for Chemistry: ");
    scanf("%f", &marks2);

    printf("Enter Marks for Physics: ");
    scanf("%f", &marks3);

   
    total = marks1 + marks2 + marks3;
    percentage = (total / 300) * 100; 
    if (percentage >= 60) {
        grade = 'A';
    } else if (percentage >= 50) {
        grade = 'B';
    } else if (percentage >= 40) {
        grade = 'C';
    } else {
        grade = 'D';
    }
    printf("\n--- Student Report ---\n");
    printf("Roll Number: %d\n", roll_no);
    printf("Name: %s\n", name);
    printf("Marks in Subject 1: %.2f\n", marks1);
    printf("Marks in Subject 2: %.2f\n", marks2);
    printf("Marks in Subject 3: %.2f\n", marks3);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
