#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int kuvvet(int a,int b)
{
    if(b==0)
    return 1;
    else if(b==1)
    return a;
    else
    return a*kuvvet(a,b-1);
}

int toplam(int a,int b)
{
    return a+b;
}

void menu()
{
    int secim;
    int taban,ust;
    int a,b;
    do{
    printf("1-Kuvvet Bul\n");
    printf("2-Toplam Bul\n");
    printf("3-Cikis\n");
    printf("Secim Giriniz");
    scanf("%d",&secim);
    if(secim!=1 && secim!=2 && secim!=3)
        printf("Lutfen dogru secenek giriniz\n");
    if(secim==1)
    {
        printf("Taban giriniz\n");
        scanf("%d",&taban);
        printf("Ust Giriniz\n");
        scanf("%d",&ust);
        printf("Sonuc : %d\n",kuvvet(taban,ust));

    }
    else if(secim==2)
    {
        a=rand()%100 + 1;
        b=100+rand()%200 + 1;
        printf("Birinci sayi %d\n",a);
        printf("Ikinci sayi %d\n",b);
        printf("%d\n",toplam(a,b));
    }
    else if(secim==3)
        break;


    }while(1);
}

int main()
{
    menu();


    return 0;
}
