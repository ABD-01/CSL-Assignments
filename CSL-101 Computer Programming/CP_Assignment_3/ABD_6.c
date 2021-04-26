// Assignment-3
// Q)6

# include <stdio.h>
# include <stdbool.h>
# include <string.h>

struct EMPLOY
{
    char name[20];
    float salary;
};

_Bool check(char *, char *);
int main()
{
    int n, i, j;
    printf("Enter the value of n : ");
    scanf(" %d", &n);
    struct EMPLOY employees[n], temp;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter employee-%d name : ", i + 1);
        scanf(" %[^\n]s", employees[i].name);
        printf("Enter his/her salary : ");
        scanf(" %f", &employees[i].salary);
    }
    for (i = 1; i < n; i++)
    {
        temp = employees[i];
        j = i - 1;
        while (check(employees[j].name, temp.name) && j >= 0)
        {
            employees[j + 1] = employees[j];
            j--;
        }
        employees[j + 1] = temp;
    }
    printf("\n The Sorted list is : \n");
    for (i = 0; i < n; i++)
    {
        printf("%-20s - %.2f\n", employees[i].name, employees[i].salary);
    }
}

_Bool check(char s1[], char s2[])
{
    if (strlen(s1) > strlen(s2))
    {
        return true;
    }
    else if (strlen(s1) == strlen(s2) && (strcmp(s1, s2) > 0))
    {
        return true;
    }
    return false;
}
