#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gun,balik;
    int yeni;
    printf("Balik ve gun sayisini giriniz:\n");
    scanf("%d",&balik);
    scanf("\n%d",&gun);

    for(int i =0;i<gun;i++)
    {
        balik=balik+((balik*10)/100);
    }
    printf("%d",balik);

    return 0;
}
