#include<stdio.h>
int main()
{
	int n,i=1,f=1;
	printf("enter the value:");
	scanf("%d",&n);
	while (i<=n)
	{
	  f=f*i;
	  i+=1;	
	}
	printf("%d",f);
}
