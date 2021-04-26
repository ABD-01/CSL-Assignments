// Assignment-2
// Mohammed Abddlah
// Roll No. - T014
// Q)24

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int longest_one(int arr[],int n);
int main()
{
    printf("\tQuestion: WAP to print the length of the longest sequence of 1's.\n\n");
    srand(time(0));
    int n,i,arr[100],ch;
    printf("Select your choice\n0)Custom Input Array\t1)Random Generated Array\n");
    scanf("%d",&ch);
    printf("Enter the number of Elements: ");
    scanf("%d",&n);
    if(!ch) printf("\nElements of array can be '0' or '1' only\n");
    printf("The Array: \n");
    for(i=0;i<n;i++)
    {
        if(!ch)
            scanf("%d",&arr[i]);
        else{
        arr[i]=rand()%2;
        printf("%d  ",arr[i]);
        }
    }
    printf("\nThe length of Longest run of 1's is %d.\n",longest_one(arr,n));
    int runagain;
    printf("\nIf you want to run the Program again, press 1 or 0 to exit.\nChoice<0/1> :");
    scanf("%d",&runagain);
    if(runagain){printf("\n\n");main();}
    return 0;
}
int longest_one(int arr[],int n)
{
    int count=0,maxcount=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i])
            count++;
        else
            count=0;
        if(count>maxcount)
            maxcount=count;
    }
    return maxcount;
}
