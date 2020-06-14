// Assignment-4
// Q)7

# include <stdio.h>
# include <string.h>

typedef char string[128];

int Merge(int , string *, int , string *, string *);
int main()
{
    string file1, file2, name1[100], name2[100], name[200];
    int i = 0, j = 0, n;
    printf("Enter file-1 name : ");
    scanf(" %[^\n]s", file1);
    printf("Enter file-2 name : ");
    scanf(" %[^\n]s", file2);
    FILE *f1 = fopen(file1, "r");
    FILE *f2 = fopen(file2, "r");
    FILE *file = fopen("NAMES.txt", "w");
    if (f1 == NULL || f2 == NULL)
    {
        printf("Error Occured.\n");
        return 1;
    }

    while (!feof(f1))
        fscanf(f1, "%s\n", name1[i++]);
    while (!feof(f2))
        fscanf(f2, "%s\n", name2[j++]);

    n = Merge(i, name1, j, name2, name);

    for (i = 0; i < n; i++)
        fprintf(file, "%s\n", name[i]);

    fclose(f1);
    fclose(f2);
    fclose(file);

}
int Merge(int l1, string n1[], int l2, string n2[], string n[])
{
    int i, j, k;
    i = j = k = 0;

    while (i < l1 && j < l2)
        (strcmp(n1[i], n2[j]) < 0) ? strcpy(n[k++], n1[i++]) : strcpy(n[k++], n2[j++]);
    while (i < l1)
        strcpy(n[k++], n1[i++]);
    while (j < l2)
        strcpy(n[k++], n2[j++]);

    for (i = 1; i < k; i++)
    {
        if (!strcmp(n[i], n[i - 1]))
        {
            for (j = i; j < k - 1; j++)
                strcpy(n[j], n[j + 1]);
            k = k - 1;
        }
    }

    return k;
}
