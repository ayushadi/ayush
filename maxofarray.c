#include <stdio.h>

void main()
{
    int a[100000],i,N,max=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<N;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
    

    
}
