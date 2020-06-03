// Assignment-3
// Q)5

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <strings.h>

typedef struct Stud
{
    char name[15];
    float marks[5];
    float avg;
    struct Stud *next;
} Stud;

Stud *students = NULL;
float classavg[5] = {0};
float counter = 0;

_Bool AddDetails();
void Display();
void CleanMemory();

int main()
{
    system("clear");
    int ch;
    while (1)
    {
        printf("_________________________________________________________\n"
               "\tEnter youir choice:\n"
               "1) Add a student details\n"
               "2) Dispaly class info\n"
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
    printf("_________________________________________________________\n");
    printf("Enter the Student's Name : ");
    scanf(" %[^\n]s", student->name);
    float average = 0;
    printf("Enter marks:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d - ", i + 1);
        scanf(" %f", &student->marks[i]);
        classavg[i] += student->marks[i];
        average += student->marks[i];
    }
    student->avg = average / 5;
    student->next = NULL;

    student->next = students;
    students = student;

    counter++;

    return true;
}

void Display()
{
    Stud *cursor = students;
    float netavg = 0;
    printf("_________________________________________________________\n");
    printf("Name%11s | Average\n", " ");
    printf("----------------|----------------------------------------\n");
    while (cursor != NULL)
    {
        printf("%-15s | %.2f\n", cursor->name, cursor->avg);
        netavg += cursor->avg;
        cursor = cursor->next;
    }
    printf("\n___Class Averages___\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d - %.2f\n", i + 1, classavg[i] / counter);
    }
    printf("Total Average - %.2f\n", netavg / counter);
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
