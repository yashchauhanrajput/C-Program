#include<stdio.h>
void main()
{
	int n,i,t;
	printf("Enter any number");
	scanf("%d",&n);
	for(i=1; i<=10; i++)
	{
		t=n*i;
		printf("%d\n",t);
	}
}
