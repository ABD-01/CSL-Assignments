// Assignment-3
// Q)10

# include <stdio.h>
# include <string.h>
# include <stdbool.h>

typedef struct
{
    char name[128];
    int phy;
    int chem;
    int math;
} STUDENTS;

void sort(STUDENTS *, int);
_Bool check(STUDENTS, STUDENTS s2);
int main()
{
    int n;
    printf("Enter the no. of Students : ");
    scanf("%d", &n);
    STUDENTS students[n];
    for (int i = 0; i < n; i++)
    {
        printf("Student - %d\n", i + 1);
        printf("Name - ");
        scanf(" %[^\n]s", students[i].name);
        printf("Marks in physics     : ");
        scanf(" %d", &students[i].phy);
        printf("Marks in chemistry   : ");
        scanf(" %d", &students[i].chem);
        printf("Marks in mathematics : ");
        scanf(" %d", &students[i].math);
    }
    sort(students, n);
    printf("\nThe sorted list is : \n\n");
    printf("Student Name%8s | Physics | Chemistry | Maths\n", " ");
    printf("---------------------|---------|-----------|------\n");
    for (int i = 0; i < n; i++)
    {
        printf("%-20s | %-7d | %-9d | %d\n", students[i].name, students[i].phy, students[i].chem, students[i].math);
    }
}

void sort(STUDENTS std[], int n)
{
    int i, j;
    STUDENTS temp;
    for (i = 1; i < n; i++)
    {
        temp = std[i];
        j = i - 1;
        while (check(std[j], temp) && j >= 0)
        {
            std[j + 1] = std[j];
            j--;
        }
        std[j + 1] = temp;
    }
}

_Bool check(STUDENTS s1, STUDENTS s2)
{
    if (s1.phy > s2.phy)
    {
        return true;
    }
    else if (s1.phy == s2.phy && s1.chem > s2.chem)
    {
        return true;
    }
    else if (s1.phy == s2.phy && s1.chem == s2.chem && s1.math > s2.math)
    {
        return true;
    }
    else if (s1.phy == s2.phy && s1.chem == s2.chem && s1.math == s2.math && (strcmp(s1.name, s2.name) > 0))
    {
        return true;
    }
    return false;
}
