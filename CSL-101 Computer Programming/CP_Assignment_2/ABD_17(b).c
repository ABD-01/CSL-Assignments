// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)17(b)

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Sort(int arr[],int n);
int Check_Sum(int arr[],int n,int x);
int main()
{
    printf("\tQuestion: WAP to determine whether or not there exist\n\ttwo elements in the input array whose sum is exactly x.\n");
    printf("\t=>This is a Recursive Solution.\n\n");
    srand(time(0));
    int n,arr[100],x,ch;
    printf("Select your choice\n0)Custom Input Array\t1)Random Generated Array\n");
    scanf("%d",&ch);
    printf("Enter the number of Elements: ");
    scanf("%d",&n);
    printf("The (sorted)Array: \n");
    for(int i=0;i<n;i++)
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
    if(!Check_Sum(arr,n,x))
        printf("\nThe function returned value 0.\nThere does not exist any two elements in Array which sums upto %d.\n",x);
    else
        printf("\nThe function returned value 1.\n");
    return 0;
}
int Check_Sum(int arr[],int n,int x)
{
    if(n==1) return 0;
    for(int i=0;i<n;i++){
        if(arr[n-1]+arr[i]==x){
            printf("\nThe elements Array[%d]=%d + Array[%d]=%d equals the given number %d .",i,arr[i],n-1,arr[n-1],x);
            return 1;
        }
    }
    return Check_Sum(arr,n-1,x);
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
