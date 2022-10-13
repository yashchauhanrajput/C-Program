#include<stdio.h>
void main()
{
	int a,b,t=1,i;
	printf("Enter the a=");
	scanf("%d",&a);
	printf("Enter the b=");
	scanf("%d",&b);
	for(i=1; i<=b; i++)
	{
		t=t*a;
	}
	printf("raised of the power=%d",t);
}

	
