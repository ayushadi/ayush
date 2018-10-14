#include<stdio.h>
void main()
{
int n,sum=0,r,original;
scanf("%d",&n);
original=n;
while(n!=0)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(original==sum)
{
printf("yes");
}
else
{
printf("no");
}
}
