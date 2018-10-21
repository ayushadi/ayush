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
         for(j=i+1;j<n;j++)
         {
             if(a[i]>a[j])
             {
                 c=a[i];
                 a[i]=a[j];
                 a[j]=c;
                 
             }
         }
     }
     
         printf("%d",a[n/2]);
     
}
