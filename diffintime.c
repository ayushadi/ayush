#include<stdio.h>
void main()
{
    int a,b,c,d,e,f;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    if(a>c)
    {
        e=a-c;
    }
    else
    {
        e=c-a;
    }
     if(b>d)
    {
        f=b-d;
    }
    else
    {
        f=d-b;
    }
    printf("%d %d",e,f);
}
