// Assignment-4
// Q)10

# include <stdio.h>

int main()
{
    int spaces = 0, punc = 0, words;
    char c, name[10];
    printf("Enter the file name : ");
    scanf("%[^\n]s", name);
    FILE *file = fopen(name, "r");
    while ((c = fgetc(file)) != EOF)
    {
        if (c == ' ')
            spaces++;
        if(c == ';' || c == ',' || c == '.' || c == '\t')
            punc++;
    }
    words = spaces - punc;
    printf("There are Words = %d\n", words + punc + 1);
    return 0;
}
