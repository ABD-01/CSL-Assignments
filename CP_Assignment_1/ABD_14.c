// Assignment-1
// Roll No. - T014
// Q)14

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int n,temp;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int arr[n];
    printf("The Array:\n");
    for(int i=0;i<n;i++)
    {
        arr[i]=rand()%100;
        printf("%d ",arr[i]);
    }
    
    for(int i=0;i<n/2;i++) //reversing
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printf("\nThe Reversed Array:\n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
