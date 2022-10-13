// write a c program to calulate  sum first n number 
#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("Enter any number=");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		sum=sum+i;
	}
		printf("sum=%d",sum);
	
	
}



