#include<stdio.h>
void main()
{
    int a,c,d;
    
    scanf("%d",&a);
    c=a/60;
    d=a-(c*60);
    printf("%d %d",c,d);
}
