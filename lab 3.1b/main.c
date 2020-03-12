#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tahmin=12314;
    int oyun=1;
    int sayi;

    while(oyun==1)
    {
        printf("Bir sayi giriniz:");
        scanf("%d",&sayi);
        if(sayi>tahmin)
        {
            printf("Lutfen daha kucuk bir sayi giriniz:\n");
        }
        else if(sayi<tahmin)
        {
            printf("Lutfen daha buyuk bir sayi giriniz:\n");
        }
        else
          {
            printf("Tebrikler\n");
            printf("Devam etmek istiyor musunuz?\n");
            printf("Evet icin(1),Hayir icin(0)\n");
            scanf("%d",&oyun);
          }
    }
    printf("Oyun sonlandi...");

    return 0;
}
