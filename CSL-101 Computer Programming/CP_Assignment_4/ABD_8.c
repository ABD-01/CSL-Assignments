// Assignment-4
// Q)8

# include <stdio.h>

int main()
{
    char file1[50], file2[50];
    int list1[100], list2[100], i, j, l1, l2;
    i = j = l1 = l2 = 0;
    printf("Enter name of file-1 : ");
    scanf(" %[^\n]s", file1);
    printf("Enter name of file-2 : ");
    scanf(" %[^\n]s", file2);
    FILE *f1 = fopen(file1, "r");
    FILE *f2 = fopen(file2, "r");
    FILE *file = fopen("numbers.txt", "w");
    if (f1 == NULL || f2 == NULL)
    {
        printf("Error Occured\n");
        return 1;
    }
    if (file == NULL)
    {
        printf("There was error handling the files.\n");
        return 1;
    }

    while (!feof(f1))
        fscanf(f1, "%d\n", &list1[i++]);
    while (!feof(f2))
        fscanf(f2, "%d\n", &list2[j++]);

    while (l1 < i && l2 < j)
        (list1[l1] < list2[l2]) ? fprintf(file, "%d\n", list1[l1++]) : fprintf(file, "%d\n", list2[l2++]);
    while (l1 < i)
        fprintf(file, "%d\n", list1[l1++]);
    while (l2 < j)
        fprintf(file, "%d\n", list2[l2++]);

    fclose(f1);
    fclose(f2);
    fclose(file);
    return 0;
}
