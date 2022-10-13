#include<stdio.h>
void main()
{
	int n,r,c,sum=0;
	printf("Enter any number=");
	scanf("%d",&n);
	c=n;

	while(n>0)
	{
		
		r=n%10;
		sum=r+(sum*10);
		n=n/10;
	}
	if(c==sum)
	printf("palindrome");
	else
	printf("paindrome not");

}
