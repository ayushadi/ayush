#inlcude<stdio.h>
void main()
{
int a,b,i;
printf("enter no");
scanf("%d",&a);
scanf("%d",&b);
for(i=a+1;i<b;i++)
{
if(i%2!=0)
{
printf("%d ",i);
}
}
}
