// Assignment-1
// Muhammed Abdullah
// Enrl. No.: BT19EEE096
// Q)1
// Count no. of consonants in a string in recursive manner

#include<stdio.h>
int count_cons(char *str);
int main()
{
    char str[128];
    printf("Enter the String: \n");
    scanf(" %[^\n]s",str);
    printf("No. of Consonants in the given string is/are : %i.\n", count_cons(str));

}
int count_cons(char str[])
{
    char temp;
    temp = str[0];
    if (temp=='\0')
        return 0;
    if (temp=='a' || temp<='A' || temp=='e' || temp=='E' ||temp=='i' || temp=='I' || temp=='o' || temp=='O' || temp=='u' || temp=='U' || temp>'z' || (temp>'Z' && temp<'a'))
        return 0 + count_cons(str+1);
    else
        return 1 + count_cons(str+1);
}