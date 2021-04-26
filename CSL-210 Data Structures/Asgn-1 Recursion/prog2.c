// Assignment-1
// Muhammed Abdullah
// Enrl. No.: BT19EEE096
// Q)2
// Find 1st Capital letter in a string in recursive manner

#include<stdio.h>
char find_cap(char*);
int main()
{
    char str[128];
    char cap;
    printf("Enter the String: \n");
    scanf(" %[^\n]s",str);
    cap = find_cap(str);
    (cap == -1) ? printf("No Capital Letter Found.\n") : printf("'%c' is the first capital letter.\n", cap);
}
char find_cap(char *str)
{
    if (*str=='\0')
        return -1;
    if (*str>='A' && *str<='Z')
        return *str;
    else
        return find_cap(str+1);
}