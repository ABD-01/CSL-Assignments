// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)34

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void Initial(char arr[],char initials[]);
int main()
{
    printf("\tQuestion: WAP that finds out the initials of the words in a string.\n\n");
    char str[50],initials[10];
    printf("Enter String : ");
    scanf(" %[^\n]s",str);
    Initial(str,initials);
    printf("\nThe initials are %s\n",initials);
    return 0;
}
void Initial(char arr[],char initials[])
{
    int j=0;
    for(int i=0;i<strlen(arr);i++)
    {
        if((i==0 || arr[i-1]==' ')&&isupper(arr[i]))
        {
            initials[j]=arr[i];
            initials[j+1]='.';
            j+=2;
        }
    }
    initials[j]='\0';
}
