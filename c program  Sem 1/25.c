 //write a c program to determine whether a number is palindrome or not.
#include<stdio.h>
void main()
{
	int n,p,tem,s=0; 
	printf("Enter any number=");
	scanf("%d",&n);
	tem=n;
	while(n>0)
	{
		p=n%10;
		s=p+(s*10);
		n=n/10;	
	}
	if(tem==s)
	printf("palindrome number");
	else
	printf(" not palindrom number");
 } 
