// Assignment-1
// Roll No. - T014
// Q)15

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int A[n],B[n],C[n],D[n];
    printf("The Array A:\n");
    for(i=0;i<n;i++)
    {
        A[i]=rand()%100;
        printf("%d ",A[i]);
    }
    printf("\nThe Array B:\n");
    for(i=0;i<n;i++)
    {
        B[i]=rand()%100;
        printf("%d ",B[i]);
    }
    for(int i=0;i<n;i++)
    {
        C[i]=A[i]+B[i];
        D[i]=A[i]*B[i];
    }
    printf("\n\nThe Array C:\n");
    for(int i=0;i<n;i++)
        printf("%d ",C[i]);
    printf("\nThe Array D:\n");
    for(int i=0;i<n;i++)
        printf("%d ",D[i]);
}
