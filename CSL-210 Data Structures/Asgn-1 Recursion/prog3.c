// Assignment-1
// Muhammed Abdullah
// Enrl. No.: BT19EEE096
// Q)3
// Sort an array of strings in Lexicographical Order

#include<stdio.h>
int comp_str(char*, char*);
int main()
{
    int n, i,j,pos;
    printf("Enter the no. of elements in string array: ");
    scanf("%d", &n);
    char array[n][32];
    char *a[32], *temp;

    for (i = 0; i < n; i++)
    {
        printf("String %i : ", i+1);
        scanf(" %s", array+i);
        a[i] = array[i];
    }

    // Sorting
    for (i = 0; i < n-1; i++)
    {
        pos = i;
        for (int j = i+1; j < n; j++)
            if (comp_str(a[j], a[pos]) < 0)
                pos = j;
        temp = a[i];
        a[i] = a[pos];
        a[pos] = temp;
    }

    for (i = 0; i < n; i++)
        printf("%s\n",a[i]);

}
int comp_str(char *str1, char *str2)
{
    int temp = *str1-*str2 ;
    if (*str1 != '\0' && *str2 != '\0' && (temp == 0))
        return comp_str(str1+1, str2+1);
    else
        return temp;
}