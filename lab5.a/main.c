#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int asal(int s1,int yari){
    if(s1<2){
        return 0;
    }
    if(yari==1){
        return 1;
    }
    if(s1%yari==0){
        return 0;
    }
    return asal(s1,yari-1);
}
int carpim(int x,int y)
{
    return x*y;
}

void menu()
{
    int secim;
    int half;
    do{
        printf("1-Asal Sayi Bulma\n");
        printf("2-Sayi Carpimi\n");
        printf("3-Cikis\n");

        printf("Secimi giriniz\n");
        scanf("%d",&secim);
        if(secim!=1 && secim!=2 && secim!=3)
            printf("Lutfen dogru seciniz\n");

        if(secim==1)
        {
            printf("Sayi Gir..:");
            int sayi;
            scanf("%d",&sayi);
            half=sayi/2;
            int mi=asal(sayi,half);

            if(mi==1)
            {
                printf("Sayi Asal\n\n");
            }
            if(mi==0)
            {
                printf("Sayi Asal Degil\n\n");
            }
        }
        else if(secim==2)
        {
          int a,b;
          srand(time(NULL));
          a=1+(rand()%20);
          srand(time(NULL));
          b=2+(rand()%98);
          printf("Sayi1 %d\n",a);
          printf("Sayi2 %d\n",b);
          printf("%d\n",carpim(a,b));
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
