
#include<stdio.h>
void main()
{
	int n=2,i,j,r=1,ncr;
	printf("Enter the n =");
	scanf("%d",&n);
//	printf("Enter the r=");
//	scanf("%d",&r);
	for(i=1; i<=n; i++);
	{
		n=n*i;
	}
	printf("%d",n);
}
	//for(j=1; j<=r; j++)
//	{
//		r=r*j;
//	}
//	ncr=n/(r*(n-r));
//	printf("ncr=%d",ncr);

