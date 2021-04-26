// Assignment-2
// Mohammed Abddlah
// Roll No. - T014
// Q)25

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int count_unique(int arr[],int n);
int main()
{
    printf("\tQuestion: WAP that counts the number of unique numbers present in a 1-D array.\n\n");
    srand(time(0));
    int n,i,arr[100],ch;
    printf("Select your choice\n0)Custom Input Array\t1)Random Generated Array\n");
    scanf("%d",&ch);
    printf("Enter the number of Elements: ");
    scanf("%d",&n);
    printf("The Array: \n");
    for(i=0;i<n;i++)
    {
        if(!ch)
            scanf("%d",&arr[i]);
        else{
        arr[i]=rand()%20;
        printf("%d  ",arr[i]);
        }
    }
    printf("\nThe number of Unique number present in array is %d.\n",count_unique(arr,n));
    return 0;
}
int count_unique(int arr[],int n)
{
    int dis=0,f=1;
    for(int i=0;i<n;i++)
    {
        for(int j=i-1;j>=0;--j)
        {
            if(arr[j]==arr[i])
            {
                f=0;
                break;
            }
        }
        if(f) dis++;
        f=1;
    }
    return dis;
}
