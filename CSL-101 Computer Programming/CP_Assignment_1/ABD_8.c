// Assignment-1
// Roll No. - T014
// Q)8

#include <stdio.h>
int main()
{
    int arr[10],o=0,e=0,n=0;
    printf("Enter the (ten)elements of Array:\n");
    for(int i=0;i<10;i++)
    {
        printf("Array[%d]= ",i);
        scanf("%d",&arr[i]);
        (arr[i]%2==0) ? e++ : o++ ;
        if(arr[i]<0)
        	n++;
    }
    printf("There are\n%d Odd Elements.\n%d Even Elements.\n%d Negative Elements\n",o,e,n);
    
}
