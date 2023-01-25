#include <stdio.h>
#include <string.h>
int main()
{
    char s[40];
    printf("enter a string:");
    scanf("%s",&s);
    printf("after rev %s",strrev(s));

}
