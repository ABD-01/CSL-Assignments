// Assignment-4
//Q)6

# include <stdio.h>

int main()
{
    char file1[50], file2[50], ch1, ch2;
    printf("Enter file-1 name : ");
    scanf(" %[^\n]s", file1);
    printf("Enter file-2 name : ");
    scanf(" %[^\n]s", file2);
    FILE *f1 = fopen(file1, "r");
    FILE *f2 = fopen(file2, "r");
    if (f1 == NULL || f2 == NULL)
    {
        printf("Error Occured.\n");
        return 1;
    }
    do
    {
        ch1 = fgetc(f1);
        ch2 = fgetc(f2);
        if (ch1 != ch2)
        {
            printf("\nThe files are not Identical.\n");
            return 0;
        }
    }
    while (ch1 != EOF && ch2 != EOF);
    printf("\nThe files are Identical.\n");
    fclose(f1);
    fclose(f2);
    return 0;
}