// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)31

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char Check_Repeat(char arr[]);
int main()
{
    printf("\tQuestion: WAP to return the first non-repeating character in a string.\n\n");
    char str[50];
    printf("Enter the String: \n");
    scanf(" %[^\n]s",str);
    if(!Check_Repeat(str))
        printf("\nThere are no Non-Repeating characters in the given string.\n");
    else
        printf("\nThe first Non-Repeating Character is %c .\n",Check_Repeat(str));
    int runagain;
    printf("\nIf you want to run the Program again, press 1 or 0 to exit.\nChoice<0/1> :");
    scanf("%d",&runagain);
    if(runagain){printf("\n\n");main();}
    return 0;
}
char Check_Repeat(char arr[])
{
    int n=strlen(arr),f=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((arr[i]==arr[j] ||abs(arr[i]-arr[j])==32)&& i!=j)
            {
                f=0;
                break;
            }
        }
        if(f)
            return arr[i];
        f=1;
    }
    return 0;
}
