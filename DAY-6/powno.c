#include <stdio.h>
int main()
{
    int x,n,n1;
    long long int result=1; 
    printf("Enter base (x) and exponent(n):");
    scanf("%d%d",&x,&n);
    n1=n;
    while (n > 0)
    {
        result=result*x;
        n=n-1;
    }
    printf("%d^%d is %lld",x,n1,result);
    return 0;
}