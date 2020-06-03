// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)16

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    printf("\tQuestion: WAP to swap the second smallest and second largest element in the array.\n\n");
    srand(time(0));
    int n,arr[100],ch;
    int i,l,s,max1=0,max2,min1=1000000000,min2,temp;
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
        arr[i]=rand()%100;
        printf("%d  ",arr[i]);
        }
    }
    for(i=0; i<n; i++)
    {
        //finding Second Largest
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
            l=i-1;
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
            l=i;
        }
        //finding Second Smallest
        if(arr[i]<min1)
        {
            min2=min1;
            min1=arr[i];
            s=i-1;
        }
        else if(arr[i]<min2 && arr[i]>min1)
        {
            min2=arr[i];
            s=i;
        }
    }
    temp=arr[s];
    arr[s]=arr[l];
    arr[l]=temp;
    printf("\nThe Array now is\n");
    for(i=0;i<n;i++)
        printf("%d  ",arr[i]);
    return 0;
}
