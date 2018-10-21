#include <stdio.h>

int main()
{
    int a,n,d,s,sum;
    int N,S,A,D;
    printf("enter lower and upper limit");
    scanf("%d%d%d",&n,&a,&d);
    if(n>=1 && d<=100000)
    { 
       N=n-1;
       D=N*d;
       A=2*a;
      
       S=A+D;
       sum=S*n/2;
       
       printf("%d",sum);
    }
    

    
}
