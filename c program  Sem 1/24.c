 //Write a c program to print out all Armstrong numbers between 1 and 500. If sum of 
 //cubes of each digit of the number is equal to the number itself, then the number is 
//called an Armstrong number
#include<stdio.h>
void main()
{
	int i,n,p,sum;
	for(i=1; i<=500; i++)
	{
		n=i;
		sum=0;
		while(n>0)
		{
		p=n%10;
		sum=sum+(p*p*p);
		n=n/10;	
		}
	if(i==sum)
	printf("armstrong number=%d\n",sum);
	}
}
