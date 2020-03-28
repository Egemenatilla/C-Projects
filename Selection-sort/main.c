#include <stdio.h>
#include <stdlib.h>

int main()
{
    int boyut;
    printf("Dizi kac elemanli olsun?\n");
    scanf("%d",&boyut);
    printf("%d elemani giriniz:",boyut);
    int eleman;
    int dizi[boyut];
    int i;
    for(i=0;i<boyut;i++)
    {  scanf("%d",&eleman);
        dizi[i]=eleman;
    }
    int gecici;
    for(int i=0;i<boyut;i++)
    {
        int eks=i;
        for(int j=i;j<boyut;j++){
            if(dizi[j]<dizi[eks])
                eks=j;

        }
                gecici=dizi[i];
                dizi[i]=dizi[eks];
                dizi[eks]=gecici;


    }


    for(int i=0;i<boyut;i++)
        printf("%d\n",dizi[i]);
    return 0;
}
