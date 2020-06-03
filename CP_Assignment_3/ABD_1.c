// Assignment-3
// Q)1

# include <stdio.h>

typedef struct
{
    char name[20];
    int id;
    float salary;
} EMPLOYEES;

int main()
{
    int n, i;
    float target;
    printf("Enter the no. of employees: ");
    scanf("%d", &n);
    EMPLOYEES employees[n];
    for (i = 0; i < n; i++)
    {
        printf("\nEmployee - %d\n", i + 1);
        printf("Enter Name: ");
        scanf(" %[^\n]s", employees[i].name);
        printf("Enter Id: ");
        scanf("%d", &employees[i].id);
        printf("Enter Salary: ");
        scanf("%f", &employees[i].salary);
    }
    printf("\nEnter the target Salary: ");
    scanf("%f", &target);
    printf("\nFollowing is the list of Employees with salary less than %.2f\n", target);
    for (i = 0; i < n; i++)
    {
        if (employees[i].salary < target)
        {
            puts(employees[i].name);
        }
    }
}
