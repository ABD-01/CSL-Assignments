// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)35

#include<stdio.h>
#include<string.h>
void squeeze(char S1[],char S2[]);
void Delete_element(char arr[],int index);
int main()
{
    printf("\tQuestion: WAP that deletes each character\n\tin the string S1 that matches any character in the string S2.\n\n");
    char str1[50],str2[50];
    printf("Enter String 1: ");
    scanf(" %[^\n]s",str1);
    printf("Enter String 2: ");
    scanf(" %[^\n]s",str2);
    squeeze(str1,str2);
    printf("\nThe string 1 now is %s .\n",str1);
    int runagain;
    printf("\nIf you want to run the Program again, press 1 or 0 to exit.\nChoice<0/1> :");
    scanf("%d",&runagain);
    if(runagain){printf("\n\n");main();}
    return 0;
}
void squeeze(char S1[],char S2[])
{
    for(int i=0;i<strlen(S1);i++){
        for(int j=0;j<strlen(S2);j++){
            if(S1[i]==S2[j]){
                Delete_element(S1,i);
                i--;}}}
}
void Delete_element(char arr[],int index)
 {
    for (int j=index;j<strlen(arr)-1;j++)
        arr[j]=arr[j+1];
    arr[strlen(arr)-1]='\0';
 }

