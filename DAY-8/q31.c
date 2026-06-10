#include <stdio.h>
int main()
{
    int n,i,j;
    printf("enter the number of lines\n");
    scanf("%d",&n);
    for(i='A';i<'A'+n;i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c\t",j); 
        }
        
        printf("\n"); 
    }
    return 0;
}