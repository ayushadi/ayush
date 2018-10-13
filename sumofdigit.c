#include<stdio.h>
void main()
{
int n,temp,sum=0;
int c=0;
printf("enter no");
scanf("%d",&n);
while(n!=0)
{
temp=n%10;
sum=sum*10+temp;
n=n/10;
c++;
}
printf("%d",c);
}

