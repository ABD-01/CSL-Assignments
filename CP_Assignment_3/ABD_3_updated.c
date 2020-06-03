// Assignment-3
// Q)3

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <strings.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    float price;
    _Bool flag;
} books[100];

int noofbooks = 0;

void AddBook();
void Display();
void Search();
void Count();
void CleanMemory();
int main()
{
    system("clear");
    int ch;
    while (1)
    {
        printf("__________________________________________________________________________________________________________________________\n"
               "\t\tMENU:\n"
               "1) Add a book Information\n"
               "2) Dispaly all Books Information\n"
               "3) List all Books of Given Author\n"
               "4) List the Count of available Books for given Title\n"
               "5) Exit\n"
               "Your Choice : "
              );
        scanf(" %d", &ch);
        system("clear");
        switch (ch)
        {
            case 1 :
                AddBook();
                break;
            case 2 :
                Display();
                break;
            case 3 :
                Search();
                break;
            case 4 :
                Count();
                break;
            case 5 :
                exit(0);
            default :
                printf("\n\033[31m INVALID OPTION. TRY AGAIN\n");
                printf("\033[0m");
        }
    }
}

void AddBook()
{
    char filename[50];
    printf("\nEnter the filename along with the extension.\n FILE : ");
    scanf(" %[^\n]s", filename);
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error opening the file\n");
        exit(1);
    }
    fread(books, sizeof(struct Book), 100, file);
    noofbooks = sizeof(books) / sizeof(struct Book);
    printf("\t\t\033[32m %d Books Information Added\n", noofbooks);
    printf("\033[0m");
}

void Display()
{
    int n = noofbooks;
    printf("__________________________________________________________________________________________________________________________\n");
    printf(" Id    | Title%-45s | Author%-44s | Price\n", " ", " ");
    printf("-------|----------------------------------------------------|----------------------------------------------------|--------\n");
    while (n--)
    {
        printf(" %-5d | %-50s | %-50s | %.2f...%d\n", books[n].id, books[n].title, books[n].author, books[n].price, n);
    }
}

void Search()
{
    int count = 0, n = noofbooks;
    printf("__________________________________________________________________________________________________________________________\n");
    printf("\nEnter the name of Author: ");
    char name[50];
    scanf(" %[^\n]s", name);
    printf("Books of Author %s are as Follows:\n\n", name);
    printf(" Id    | Title%-45s | Author%-44s | Price\n", " ", " ");
    printf("-------|----------------------------------------------------|----------------------------------------------------|--------\n");
    while (n--)
    {
        if (strcasecmp(books[n].author, name) == 0)
        {
            printf(" %-5d | %-50s | %-50s | %.2f\n", books[n].id, books[n].title, books[n].author, books[n].price);
            count++;
        }
    }
    if (!count)
    {
        printf("\n No Books Found of given Author\n");
    }
}

void Count()
{
    int count = 0, n = noofbooks;
    printf("__________________________________________________________________________________________________________________________\n");
    printf("\nEnter the Title of the Book: ");
    char name[50];
    scanf(" %[^\n]s", name);
    while (n--)
    {
        if (strcasecmp(books[n].title, name) == 0 && books[n].flag == true)
        {
            count++;
        }
    }
    printf("There are %d Book(s) available with Title: %s\n", count, name);
}

