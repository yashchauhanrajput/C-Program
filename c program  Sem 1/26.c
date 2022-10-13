// . Write a c program to find the binary equivalent of the entered number
#include<stdio.h>
void main()
{
     int n,p, b=0,base=1;
     printf("Enter any numbers=");
     scanf("%d",&n);
     while(n>0)
     {
     	p=n%2;
     	b=b+p*base;
     	n=n/2;
     	base=base*10;
	 }
	 printf("binary number=%d",b);
     
}
