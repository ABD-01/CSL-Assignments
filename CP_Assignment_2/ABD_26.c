// Assignment-2
// Mohammed Abddlah
// Roll No. - T014
// Q)26

#include<stdio.h>
int n,arr[100];
void Delete_element(int index);
int compact ();
int main ()
{
    printf("\tQuestion: WAP to Compact the array so that consecutive\n\toccurrences are replaced by a single occurrence.\n\n");
    printf("Enter the number of Elements: ");
    scanf("%d",&n);
    printf("Enter %d Elements: \n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
	n=compact();
	printf("\nThe Array now is :\n");
	for (int i=0;i<n;i++)
 		printf("%d ",arr[i]);
	printf("\nNo of elements are: %d\n",n);
	return 0;
}
 int compact ()
 {
 	int i=1;
 	while (i<n)
 	{
 		if (arr[i]==arr[i-1])
 			Delete_element(i);
 		else
 			i++;
 	}
 	return n;
 }
 void Delete_element(int index)
 {
    for (int j=index;j<n-1;j++)
        arr[j]=arr[j+1];
    n=n-1;
 }
