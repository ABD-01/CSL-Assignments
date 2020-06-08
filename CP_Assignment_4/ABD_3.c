// Assignment-4
// Q)3

# include <stdio.h>

void printfile(FILE *);
int main()
{
    char filename[128], ch;
    printf("Enetr the File Name to Open : ");
    scanf(" %[^\n]s", filename);
    FILE *file = fopen(filename, "r+");
    if (file == NULL)
    {
        printf("Cannot Open File\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF)
    {
        if (ch > 64 && ch < 91)
        {
            fseek(file, -1, SEEK_CUR);
            fputc(65 + (ch - 64) % 26, file);
        }
        else if (ch > 96 && ch < 123)
        {
            fseek(file, -1, SEEK_CUR);
            fputc(97 + (ch - 96) % 26, file);
        }
    }
    printf("The Updated file is as follows:\n\n");
    printfile(file);
    fclose(file);
    printf("\n");
    return 0;
}
void printfile(FILE *fp)
{
    rewind(fp);
    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
}