#include<stdio.h>
int main()
{
    long long int a=0,base=1,n,b,n1;
    printf("Enter the decimal number:");
    scanf("%lld",&n);
    n1=n;
    while (n!=0)
    {
        b=n%2;
        a=a+b*base;
        base=base*10;
        n=n/2;
    }
    printf("The decimal number %lld into binanry is %lld ",n1,a);
    return 0;
}