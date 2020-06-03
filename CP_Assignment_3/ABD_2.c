// Assignment-3
// Q)2

# include <stdio.h>

struct
{
    char city[20];
    int population;
    float literacy;
} census[5], temp;

int main()
{
    int i, j;
    printf("Enter the Information for the cities.");
    for (i = 0; i < 5; i++)
    {
        printf("\nCity - %d\n", i + 1);
        printf("Enter Name: ");
        scanf(" %[^\n]s", census[i].city);
        printf("Enter population: ");
        scanf("%d", &census[i].population);
        printf("Enter Literacy Level: ");
        scanf("%f", &census[i].literacy);
    }

    for (i = 1; i < 5; i++)
    {
        temp = census[i];
        j = i - 1;
        while (census[j].literacy > temp.literacy && j >= 0 )
        {
            census[j + 1] = census[j];
        }
        census[j + 1] = temp;
    }

    printf("The list of Cities ordered by their Literacy Rate:\n");
    printf("Name, Population, Literacy Rate\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s, %d, %.2f%% \n", census[i].city, census[i].population, census[i].literacy);
    }
}
