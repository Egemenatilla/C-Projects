#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fib1=1;
    int fib2=1;
    int fib;
    int n;
    printf("Kacici fib sayisi bulunsun ?");
    scanf("%d",&n);
    if(n==1||n==2)
    {
     printf("1");
     return 0;
    }
    for(int i=3;i<=n;i++)
    {
        fib=fib1+fib2;
        fib1=fib2;
        fib2=fib;
    }
    printf("%d",fib);
    return 0;
}
