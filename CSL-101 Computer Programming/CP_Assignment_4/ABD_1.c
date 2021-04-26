// Assignment-4
// Q)1

# include <stdio.h>

int main()
{
    char filename[128], ch;
    printf("Enetr the File Name to Open : ");
    scanf(" %[^\n]s", filename);
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("\033[31mError opening the File.");
        printf("\033[0m");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF)
    {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    fclose(file);
    return 0;
}
