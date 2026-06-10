#include <stdio.h>
int main()
{
    long long a = 0, n, n1,base=1;
    int b;
    printf("Enter the binary number: ");
    scanf("%lld", &n);
    n1 = n;
    while (n != 0)
    {
        b= n%10;
        a= a+b*base;
        base= base*2;
        n= n/10;
    }
    
    printf("The  binary number %lld to decimal is %lld\n", n1, a);
    return 0;
}