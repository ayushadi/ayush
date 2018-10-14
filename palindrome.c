#include<stdio.h>
void main()
{
int n,r,sum=0,original;
printf("enter no");
scanf("%d",&n);
original=n;
while(n!=0)
{
r=n%10;
sum=sum*10+r;
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
