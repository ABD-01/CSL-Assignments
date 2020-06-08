// Assignment-4
// Q)5

# include <stdio.h>
# include <ctype.h>

int main()
{
    int upper, lower, number, special;
    upper = lower = number = special = 0;
    char filename[128], ch;
    printf("Enter the file name to open: ");
    scanf(" %[^\n]s", filename);
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error opening the File");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF)
    {
        if (isupper(ch))
        {
            upper++;
        }
        else if (islower(ch))
        {
            lower++;
        }
        else if (isdigit(ch))
        {
            number++;
        }
        else
        {
            special++;
        }
    }
    printf("There are %d UpperCase Letters\n"
           "There are %d LowerCase Letters\n"
           "There are %d Numbers\n"
           "There are %d Special characters\n",
           upper, lower, number, special);
    fclose(file);
    return 0;
}