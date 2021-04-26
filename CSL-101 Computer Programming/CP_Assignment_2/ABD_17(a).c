// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)17(a)

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Sort(int arr[],int n);
int main()
{
    printf("\tQuestion: WAP to determine whether or not there exist\n\ttwo elements in the input array whose sum is exactly x.\n");
    printf("\t=>This is an Iterative Solution.\n\n");
    srand(time(0));
    int n,arr[100],i,j,x,ch;
    printf("Select your choice\n0)Custom Input Array\t1)Random Generated Array\n");
    scanf("%d",&ch);
    printf("Enter the number of Elements: ");
    scanf("%d",&n);
    printf("The (sorted)Array: \n");
    for(i=0;i<n;i++)
    {
        if(!ch)
            scanf("%d",&arr[i]);
        else
            arr[i]=1+rand()%50;
    }
    if(ch)
        Sort(arr,n);
    printf("\n\nEnter the value of x: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]+arr[j]==x)
            {
                printf("\nThe elements Array[%d]=%d + Array[%d]=%d equals the given number %d \n",j,arr[j],i,arr[i],x);
                exit(0);
            }
        }
    }
    printf("\nThere does not exist any two elements in Array which sums upto %d.\n",x);
    return 0;
}
void Sort(int arr[],int n)
{
    int temp;
    for(int i=n-2;i>=0;i--){
    	for(int j=0;j<=i;j++){
        	if(arr[j]>arr[j+1]){
           		temp=arr[j];
           		arr[j]=arr[j+1];
           		arr[j+1]=temp;}}}
   	for(int i=0;i<n;i++)
            printf("%d  ",arr[i]);
}
