// Assignment-2
// Mohammed Abddlah
// Roll No. - T014
// Q)27

#include<stdio.h>

int Duplicate(int arr[],int n,int k);
int main()
{
    printf("\tQuestion: Write a function that returns '1' if there exists\n\ti, j belongs to [0,n-1] such that A[i]=A[j] and |i-j| < k.\n\n");
    int arr[100],n,k;
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
    printf("\nThe function returned value %d .\n",Duplicate(arr,n,k));
    return 0;
}
int Duplicate(int arr[],int n,int k)
{
    for(int i=0;i<=n-k;i++)
        for(int j=i+k-1;j>i;j--)
            if(arr[j]==arr[i])
                return 1;
    return 0;
}
