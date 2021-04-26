// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)10

#include<stdio.h>
#include<string.h>
void printNum(char arr[]);
int main()
{
    printf("\tQuestion: Write a function printNum (327) to print 3 2 7\n\n");
    char num[20];
    printf("Enter the number: ");
    scanf("%s",num);
    printNum(num);
    return 0;
}
void printNum(char arr[])
{
    if(strlen(arr)>0)
    {

    printf(" %c",arr[0]);
     for(int i=0;i<strlen(arr)-1;i++)
            arr[i]=arr[i+1];
    arr[strlen(arr)-1]='\0';
    printNum(arr);
    }
}
