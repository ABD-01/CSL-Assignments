// Assignment-4
// Q)4

# include <stdio.h>

int main()
{
    char filename[128], ch;
    int line = 1;
    printf("Enter the file name to open: ");
    scanf(" %[^\n]s", filename);
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Cannot open the file.\n");
        return 1;
    }
    printf("\n%-4d |  ", line);
    while ((ch = fgetc(file)) != EOF)
    {
        printf("%c", ch);
        if (ch == '\n')
        {
            line++;
            printf("%-4d |  ", line);
        }
    }
    printf("\n");
    fclose(file);
    return 0;
}