// Assignment-1
// Muhammed Abdullah
// Enrl. No.: BT19EEE096
// Q)7
// Sort elements at even indices in acsending order and vice-versa

#include<stdio.h>
int main()
{
    int i,j,k, narr[10], item;
    for (i=0; i<10; i++)
    {
        printf("Enter no. at index %i : ", i);
        scanf(" %d", &narr[i]);
    }
    /* Insertion Sort */
    for (i=2; i<10; i+=2)
    {
        item = narr[i];
        for (j=i-2; (j>=0 && narr[j]>item); j-=2)
            narr[j+2] = narr[j];
        narr[j+2] = item;

        k = i+1;
        item = narr[k];
        for (j=k-2; (j>=0 && narr[j]<item); j-=2)
            narr[j+2] = narr[j];
        narr[j+2] = item;
    }
    for (i = 0; i < 10; i++)
        printf("%i ", narr[i]);
    printf("\n");
}