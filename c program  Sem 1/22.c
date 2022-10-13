  // write a c program calulate sum of given n number //
#include<stdio.h>
void main()
{
    int i,j,n,sum=0;
    printf("How many tarm of sum number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      {
        printf("Enter the no%d: ",i);
        scanf("%d",&j);
        s=s+j;
      }
  printf("sum of all number= %d",s);
}
