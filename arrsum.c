#include<stdio.h>
void main()
{
int i;
printf("enter no");
scanf("%d",&n);
printf("enter array");
for(i=0;i<n;i++)
{
scanf("%d"&a[i]);
}
int sum=0;
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf(sum);
}
