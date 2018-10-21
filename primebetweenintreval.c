#include <stdio.h>

int main()
{
    int lower,high,i,flag;
    printf("enter lower and upper limit");
    scanf("%d%d",&lower,&high);
    while(lower<high)
    {
        flag=0;
        for(i=2;i<=lower/2;i++)
        {
            if(lower%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ",lower);
            
        }
        ++lower;
    }

    
}
