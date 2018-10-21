
#include <stdio.h>

void main()
{
    int a[100000],i,N,min=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<N;i++)
    { min=a[0];
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d",min);
    

    
}
