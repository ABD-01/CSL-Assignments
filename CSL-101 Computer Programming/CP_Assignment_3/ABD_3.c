// Assignment-3
// Q)3

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <strings.h>

typedef struct Book
{
    int id;
    char title[20];
    char author[20];
    float price;
    _Bool flag;
    struct Book *next;
} Book;

// Start of linked list
Book *books = NULL;


_Bool AddBook();
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
        printf("\n______________________________________________________________\n"
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
                if (!AddBook())
                {
                    printf("\033[31m Could not Add the Book\n");
                    printf("\033[0m");
                    return 1;
                }
                else
                {
                    printf("\t\t\033[32m Book Added\n");
                    printf("\033[0m");
                }
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
                CleanMemory();
                exit(0);
            default :
                printf("\n\033[31m INVALID OPTION. TRY AGAIN\n");
                printf("\033[0m");
        }
    }
}

_Bool AddBook()
{
    // Creating a pointer to hold data temporarily
    Book *load = malloc(sizeof(Book));
    if (load == NULL)
    {
        printf("Something Went Wrong");
        return false;
    }
    printf("______________________________________________________________\n");
    printf("Enter Book id     :");
    scanf("%d", &load->id);
    printf("Enter Book Title  :");
    scanf(" %[^\n]s", load->title);
    printf("Enter Book Author :");
    scanf(" %[^\n]s", load->author);
    printf("Enter Book Price  :");
    scanf("%f", &load->price);
    load->next = NULL;
    load->flag = true;

    // Inserting the new value into the list
    load->next = books;
    books = load;

    return true;
}

void Display()
{
    Book *cursor = books;
    printf("______________________________________________________________\n");
    printf(" Id    | Title%-15s | Author%-14s | Price\n", " ", " ");
    printf("-------|----------------------|----------------------|---------\n");
    while (cursor != NULL)
    {
        printf(" %-5d | %-20s | %-20s | %.2f\n", cursor->id, cursor->title, cursor->author, cursor->price);
        cursor = cursor->next;
    }
}

void Search()
{
    Book *cursor = books;
    int count = 0;
    printf("______________________________________________________________\n");
    printf("\nEnter the name of Author: ");
    char name[20];
    scanf(" %[^\n]s", name);
    printf("Books of Author %s are as Follows:\n\n", name);
    printf(" Id    | Title%-15s | Author%-14s | Price\n", " ", " ");
    printf("-------|----------------------|----------------------|--------\n");
    while (cursor != NULL)
    {
        if (strcasecmp(cursor->author, name) == 0)
        {
            printf(" %-5d | %-20s | %-20s | %.2f\n", cursor->id, cursor->title, cursor->author, cursor->price);
            count++;
        }
        cursor = cursor->next;
    }
    if (!count)
    {
        printf("\n No Books Found of given Author\n");
    }
}

void Count()
{
    Book *cursor = books;
    int count = 0;
    printf("______________________________________________________________\n");
    printf("\nEnter the Title of the Book: ");
    char name[20];
    scanf(" %[^\n]s", name);
    while (cursor != NULL)
    {
        if (strcasecmp(cursor->title, name) == 0 && cursor->flag == true)
        {
            count++;
        }
        cursor = cursor->next;
    }
    printf("There are %d Book(s) available with Title: %s\n", count, name);
}

void CleanMemory()
{
    Book *cursor = books;
    while (cursor != NULL)
    {
        Book *temp = cursor;
        cursor = cursor->next;
        free(temp);
    }
}
