#include <stdio.h>


int main()
{
    int num,d,sum=0,ori;
    scanf("%d",&num);
    ori=num;
    while(num!=0)
    {
        d=num%10;
        sum=sum+d;
        num=num/10;
        
    }
    printf("sum of given number %d = %d",ori,sum);
    return 0;
}
