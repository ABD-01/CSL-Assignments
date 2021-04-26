// Assignment-2
// Mohammed Abddlah
// Roll No. - T014
// Q)28

#include<stdio.h>

int arr[100],n,k,arr2[100];
void Cyclic_Shift(int k);
int main()
{
    printf("\tQuestion: Write a function that create another array,\n\twhich is obtained by cyclically shifting the input array A\n\tby k positions to the right.\n\n");
    printf("Enter the number of Elements: ");
    scanf("%d",&n);
    printf("Enter %d Elements: \n",n);
    for(int i=0;i<n;i++)
    {
        printf("Array[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the value of k: ");
    scanf("%d",&k);
    Cyclic_Shift(k);
    for(int i=0;i<n;i++)
        printf("%d ",arr2[i]);
    return 0;
}
void Cyclic_Shift(int k)
{
    int i=0;
    for(int j=n-k;j<n;j++)
    {
        arr2[i]=arr[j];
        i++;
    }
    for(int j=0;j<n-k;j++)
    {
        arr2[i]=arr[j];
        i++;
    }
}
