// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)33

#include<stdio.h>

void Translate_pig_Latin(char w[],int n);
int main()
{
    printf("\tQuestion: WAP to translate English-language word into pig-Latin.\n\t(Don't use string.h library)\n\n");
    char word[50],ch;
    int n=0;
    printf("Enter the word in English Language: \n");
    do{
        ch=getchar();
        word[n]=ch;
        n++;
    }while(ch!='\n');
    n=n-1;
    word[n]='\0';
    printf("\nThe word in English-Language is %s .\n",word);
    Translate_pig_Latin(word,n);
    printf("\nThe word translated in pig-Latin is %s .\n",word);
    return 0;
}
void Translate_pig_Latin(char w[],int n)
{
    char temp=w[0];
    for(int i=0;i<n-1;i++)
        w[i]=w[i+1];
    w[n-1]=temp;
    w[n]='a';
    w[n+1]='y';
    w[n+2]='\0';
}
