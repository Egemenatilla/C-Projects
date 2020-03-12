#include <stdio.h>
#include <stdlib.h>

int b(int bakiye)
{
    return bakiye;
}
int para_yatir(int x,int bakiye)
{
    bakiye=bakiye+x;
    return bakiye;
}

int para_cek(int x,int bakiye)
{
    if(x>bakiye)
        printf("Yeterli paraniz yok");
    else
    {
        bakiye=bakiye-x;

    }
    return bakiye;
}

void mesaj()
{
    printf("--------ATM--------\n");
    printf("1-Bakiye Sorgulama\n");
    printf("2-Para Cekme\n");
    printf("3-Para Yatirma\n");
    printf("----------------------\n");
}
// int bakiye=1000;
int main()
{
    int secim=0;
    int islem;
    int tutar;
    mesaj();
   
   int bakiye=1000;

    while(secim==0)
    {

        printf("Bir islem Seciniz\n");
        scanf("%d",&islem);
        if(islem!=1&&islem!=2&&islem!=3)
            printf("Lutfen dogru deger giriniz\n");
        if(islem==1)
        {
            printf("%d",b(bakiye));
        }
        else if(islem==2)
        {
            printf("Tutari giriniz:");
            scanf("%d",&tutar);
            printf("%d",para_cek(tutar,bakiye));
            bakiye=bakiye-tutar;
        }
        else if(islem==3)
        {
            printf("Tutari giriniz:");
            scanf("%d",&tutar);
            printf("%d",para_yatir(tutar,bakiye));
            bakiye=bakiye+tutar;
        }

        printf("\nDevam etmek istiyor musunuz?\n");
        printf("Evet icin(0), Hayir icin(1)");
        scanf("%d",&secim);
    }
    printf("Programdan cikiliyor");

    return 0;
}
