// Assignment-4
// Q)2

# include <stdio.h>

void printfile(FILE *);
int main()
{
    int n, num;
    FILE *odd = fopen("odd.txt", "w+");
    FILE *even = fopen("even.txt", "w+");
    if (odd == NULL || even == NULL)
    {
        printf("Cannot Open File.");
        return 1;
    }
    printf("How many integers do you want to Enter ?\n Ans : ");
    scanf("%i", &n);
    while (n--)
    {
        printf("Enter an Integer: ");
        scanf("%i", &num);
        if (num & 1)
        {
            fprintf(odd, "%i\n", num);
        }
        else
        {
            fprintf(even, "%i\n", num);
        }
    }
    printf("\nThe Content of the Files \"odd.txt\" are\n");
    printfile(odd);
    printf("\nThe Content of the Files \"even.txt\" are\n");
    printfile(even);
    fclose(odd);
    fclose(even);
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