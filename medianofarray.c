#include<stdio.h>
void main()
{
    int a[100000],i,n;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
printf("%d",a[n/2]);
}
