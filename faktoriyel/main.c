#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fakt=1;
    int n;
    printf("Faktoriyeli hesaplanmasini istediginiz sayiyi giriniz:");
    scanf("%d",&n);
    if(n==0)
    {
        printf("1");
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        fakt=fakt*i;
    }
    printf("%d",fakt);
    return 0;
}
