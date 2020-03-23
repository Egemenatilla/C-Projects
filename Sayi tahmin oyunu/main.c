#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void menu()
{
    printf("1-Oyuna Basla <1>\n");
    printf("2-Oyunu Bitir <-1>\n");

}

void oyun()
{
    menu();
    printf("Secim gir:\n");
    int secim=1;
    int sayi;
    srand(time(NULL));
    sayi=rand()%1000;
    int tahmin;

    do{
        scanf("%d",&secim);
        if(secim!=-1&&secim!=1){
        printf("Lutfen Dogru Secimi Giriniz\n");
        menu();
        }
        if(secim==-1)
            break;
    }while(secim!=1);


    while(secim==1){
        printf("Tahmininiz nedir ?\n");
        scanf("%d",&tahmin);
        if(tahmin>sayi)
            printf("Daha kucuk bir sayi giriniz.\n");
        else if(tahmin<sayi)
            printf("Daha buyuk bir sayi giriniz.\n");
        else{
            printf("Tebrikler\n");
            menu();
            printf("Secim gir\n");
            scanf("%d",&secim);
            if(secim==-1)
                break;
        }
    }
    printf("Oyun sonlaniyor");
}

int main()
{
    oyun();
    return 0;
}
