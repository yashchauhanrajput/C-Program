// Write a c program to determine whether a number is prime or not. A prime number 
 //  is one, which is divisible only by 1 or itself.
#include<stdio.h>
void main()
{
	int n,i,count=0;
	printf("Enter any number=");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			count++;
		}
    }  
	if(count==2)
		printf("prime number");
		else
		printf("not prime number");
    
}
