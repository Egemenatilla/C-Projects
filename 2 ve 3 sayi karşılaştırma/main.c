#include <stdio.h>
#include <stdlib.h>

int iki_sayi(a,b)
{
    if(a>b)
        return a;
    else
        return b;
}

int uc_sayi(a,b,c)
{
    return iki_sayi(a,iki_sayi(b,c));
}
int main()
{
    int s1,s2,s3;
    printf("sayilari giriniz");
    scanf("%d",&s1);
    scanf("\n%d",&s2);
    scanf("\n%d",&s3);
    printf("%d",uc_sayi(s1,s2,s3));
    return 0;
}
