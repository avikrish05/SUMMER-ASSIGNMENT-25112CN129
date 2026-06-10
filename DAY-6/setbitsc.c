#include<stdio.h>
int main()
{
    unsigned long int n,a,n1;
    int count=0;
    printf("Enter the number:");
    scanf("%lu",&n);
    n1=n;
    while (n!=0)
    {
        if ((n&1)==1)
        {
        count=count+1;
        }
        n=n>>1;
    }
    printf("The number of count set bits in integer %lu is %d",n1,count);
    return 0;
}