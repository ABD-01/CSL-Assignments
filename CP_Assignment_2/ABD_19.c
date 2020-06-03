// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)19

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    printf("\tQuestion: WAP to find peak elements in an Array.\n\n");
    srand(time(0));
    int n,arr[100],i,ch;
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
    printf("\n\nThe peak Elements are:\n");
    if(arr[0]>arr[1])
        printf("%d",arr[0]);
    for(i=1;i<n-1;i++)
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            printf(" %d",arr[i]);
    if(arr[n-1]>arr[n-2])
        printf("% d",arr[n-1]);
    int runagain;
    printf("\nIf you want to run the Program again, press 1 or 0 to exit.\nChoice<0/1> :");
    scanf("%d",&runagain);
    if(runagain){printf("\n\n");main();}
    return 0;
}
