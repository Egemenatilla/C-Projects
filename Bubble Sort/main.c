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
    for(int i=0;i<10;i++)
    {
        for(int j=1;j<10;j++){
            if(dizi[j-1]>dizi[j])
            {
                gecici=dizi[j];
                dizi[j]=dizi[j-1];
                dizi[j-1]=gecici;
            }

    }

    }
    for(int i=0;i<10;i++)
        printf("%d\n",dizi[i]);
    return 0;
}
