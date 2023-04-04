#include<stdio.h>

int t1,t2,t3;
int i,n,k;

void han(int n, int a, int b, int c)
{
    if(n==1)
        {printf("%d %d", a,b);
        printf("\n");}
    else
   {
    han(n-1,t1,t3,t2);
    printf("%d %d",t1,t2);
    printf("\n");
    han(n-1,t3,t2,t1);
    }
}
int main()
{
    printf("n=");
    scanf("%d",&n);

    t1=1;
    t2=2;
    t3=3;
    k=1;
    for(i=1; i<=n; i++)
        k=k*2;
    printf("%d",k-1);
    printf("\n");

    han(n,t1,t3,t2);

    return 0;
}