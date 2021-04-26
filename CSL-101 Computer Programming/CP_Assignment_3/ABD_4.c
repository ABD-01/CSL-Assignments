// Assignment-3
// Q)4

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <strings.h>

typedef struct Stud
{
    char name[20];
    float marks[5];
    char grade;
    struct Stud *next;
} Stud;

Stud *students = NULL;

_Bool AddDetails();
void Display();
void CleanMemory();

int main()
{
    system("clear");
    int ch;
    while (1)
    {
        printf("______________________________________________________________\n"
               "\tEnter youir choice:\n"
               "1) Add a student details\n"
               "2) Dispaly student details\n"
               "3) To Exit\n"
               "Your Choice : "
              );
        scanf(" %d", &ch);
        system("clear");
        if (ch == 1)
        {
            if (!AddDetails())
            {
                printf("\033[31m Error occured adding the details.");
                printf("\033[0m");
                return 1;
            }
            printf("\033[32m Details Added Successfully\n");
            printf("\033[0m");
        }
        else if (ch == 2)
        {
            Display();
        }
        else if (ch == 3)
        {
            CleanMemory();
            return 0;
        }
        else
        {
            printf("\033[31m Invalid Option. Try Again\n");
            printf("\033[0m");
        }
    }
}

_Bool AddDetails()
{
    Stud *student = malloc(sizeof(Stud));
    if (student == NULL)
    {
        printf("Memory Error.");
        return false;
    }
    printf("______________________________________________________________\n");
    printf("Enter the Student's Name : ");
    scanf(" %[^\n]s", student->name);
    printf("Enter marks:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d - ", i + 1);
        scanf(" %f", &student->marks[i]);
    }
    printf("Enter Student Grade : ");
    scanf(" %c", &student->grade);
    student->next = NULL;

    student->next = students;
    students = student;

    return true;
}

void Display()
{
    Stud *cursor = students;
    printf("______________________________________________________________\n");
    char studname[20];
    int flag = 0;
    printf("Enter the Student name: ");
    scanf(" %[^\n]s", studname);
    while (cursor != NULL)
    {
        if (strcasecmp(cursor->name, studname) == 0)
        {
            printf("\nStudent : %s\nMarks\n", cursor->name);
            for (int i = 0; i < 5; i++)
            {
                printf("Subect %d - %.2f\n", i + 1, cursor->marks[i]);
            }
            printf("Grade - '%c'\n", cursor->grade);
            flag = 1;
        }
        cursor = cursor->next;
    }
    if (!flag)
    {
        printf("\033[31mNo details present of given student.\n");
        printf("\033[0m");
    }
}

void CleanMemory()
{
    Stud *cursor = students;
    while (cursor != NULL)
    {
        Stud *temp = cursor;
        cursor = cursor->next;
        free(temp);
    }
}
