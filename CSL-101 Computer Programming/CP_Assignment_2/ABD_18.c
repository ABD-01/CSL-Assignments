// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)18

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    printf("\tQuestion: WAP that places kth element of an array at position 1,\n");
    printf("\t          the (k + 1) th element in position 2, etc.\n");
    printf("\t          The original 1st element is placed at (n - k + 1) and so on..\n\n");
    srand(time(0));
    int n,arr[100],i,j,k,ch,temp;
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
    printf("\n\nEnter the Position k: ");
    scanf("%d",&k);
    for(j=0;j<k-1;j++)
    {
        temp=arr[0];
        for(i=0;i<n-1;i++)
            arr[i]=arr[i+1];
        arr[n-1]=temp;
    }
    for(i=0;i<n;i++)
        printf("%d  ",arr[i]);
    return 0;
}
