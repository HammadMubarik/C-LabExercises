#include <stdio.h>
#include <string.h>

struct employee
{
    char name[20];
    int number;
    int hours;
    int rate;

};

int main()
{

    FILE *pF = fopen("Employee.txt", "w");  // Open file in write mode

    if (pF == NULL) {
        perror("Error opening file");
        return 1; // Return an error code
    }
    int numberOfEmployees = 0;

    printf("How many employees would you like to add?: ");
    scanf("%d" , &numberOfEmployees );

      for (int i = 0; i < numberOfEmployees; i++) 
      {
        struct employee newEmployee;
        
        printf("\nEnter details for new employee %d:\n", i + 1);
       
        printf("Name: ");
        scanf("%s", newEmployee.name);
        fprintf(pF, "Name: %s\n ",newEmployee.name);
       
        printf("Employee Number: ");
        scanf("%d", &newEmployee.number);
        fprintf(pF, "Employee number: %d\n", newEmployee.number);
       
        printf("Hours per Week: ");
        scanf("%d", &newEmployee.hours);
        fprintf(pF, "Hours per week: %d\n ",  newEmployee.hours);

        printf("Hourly Rate: ");
        scanf("%d", &newEmployee.rate);
        fprintf(pF, "Hourly rate: %d\n ",  newEmployee.rate);
       }

    fclose(pF);
}