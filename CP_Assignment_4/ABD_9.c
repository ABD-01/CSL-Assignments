// Assignment-4
// Q)9

# include <stdio.h>

int main()
{
    int arr[100], n = 0, size, sum = 0;
    char name[50];
    printf("Enter the name of file : ");
    scanf("%[^\n]s", name);
    FILE *file = fopen(name, "a+");
    fseek(file, 0, SEEK_END);
    size = ftell(file);
    // printf("The size of file is %d bytes\n", size);
    if (!size)
    {
        printf("The file is Empty.\nYou need to enter few integers.(Enter 0 when done.)\n");
        while (1)
        {
            printf("Enter an Integer : ");
            scanf("%d", &arr[n]);
            if (!arr[n])
                break;
            fprintf(file, "%d ", arr[n]);
            sum += arr[n++];
        }
    }
    else
    {
        rewind(file);
        while (!feof(file))
        {
            fscanf(file, "%d\n", &arr[n]);
            sum += arr[n++];
        }
    }

    fprintf(file, " %d ", sum);
    return 0;
}
