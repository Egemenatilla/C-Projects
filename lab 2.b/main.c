#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int kb,yas,test;
    printf("Kan basinci,yas,test degerlerini sirasiyla giriniz");
    scanf("%d",&kb);
    scanf("%d",&yas);
    scanf("%d",&test);
    if(kb<100)
        printf("Hasta sagliklidir...");
    else
    {
        if(yas>50 && test>=100)
            printf("Hasta...");
        if(yas>35 && test>150)
            printf("Hasta...");
        if (yas<=35 && test<100)
            printf("Saglikli.");
    }

    */

    int sayi,b,bi,y,o,toplam;
    printf("Sayiyi giriniz:");
    scanf("%d",&sayi);
    if(sayi<1000 || sayi>9999)
    {
        printf("sayi 4 basamakli olmalidir");
        return 0;
    }

    b=sayi/1000;
    sayi=sayi-(b*1000);
    y=sayi/100;
    sayi=sayi-(y*100);
    o=sayi/10;
    sayi=sayi-(o*10);
    bi=sayi;
    toplam=o+bi;

    if(toplam%2==0)
        printf("cift");
    else
        printf("tek");





    return 0;
}
