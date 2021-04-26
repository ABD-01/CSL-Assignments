// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)32

#include<stdio.h>
#include<string.h>
int strend(char s[],char t[]);
int main()
{
    printf("\tQuestion: Write a function strend (s, t), which returns 1\n\tif the string t occurs at the end of the string s,\n\tand zero otherwise.\n\n");
    char str[50],substr[50];
    printf("Enter the String: \n");
    scanf(" %[^\n]s",str);
    printf("Enter the Substring: \n");
    scanf(" %[^\n]s",substr);
    printf("\nThe function strend(s,t) returned the value %d .\n",strend(str,substr));
    return 0;
}
int strend(char s[],char t[])
{
    int i,j;
    for(i=strlen(s)-1,j=strlen(t)-1;j>0;i--,j--)
        if(s[i]!=t[j])
            return 0;
    return 1;
}
