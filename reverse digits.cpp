#include <stdio.h>
    

int main()
{
    int num,d,rev=0;
    scanf("%d",&num);
    while(num!=0)
    {
        d=num%10;
        rev=rev*10+d;
        num=num/10;
        
    }
    printf("reversed number = %d",rev);
    return 0;
}
