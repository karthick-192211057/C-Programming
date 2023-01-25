#include <stdio.h>
int main()
{
	int a,b,k=1;
	printf("enter the number to get tables:");
	scanf("%d",&a);
	printf("enter the number to end tables:");
	scanf("%d",&b);
	while (k<=b)
	{
		printf("%d x %d = %d\n",a,k,a*k);
		k++;
	}
}
