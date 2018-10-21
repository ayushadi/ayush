#include<stdio.h>
void main()
{
    int a[100000],i,j,c,n;
    printf("enter no");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
     {
         printf("%d %d\n",a[i],i);
     }
     
}
