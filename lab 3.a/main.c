#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ay;
    printf("Ay no gir:");
    do{
    scanf("%d",&ay);
    if (ay==1||ay==3||ay==5||ay==7||ay==9||ay==11)
        printf("%d. ay 31 gun icerir",ay);
    else if(ay==2||ay==4||ay==6||ay==8||ay==10||ay==12)
        printf("%d. ay 30 gun icerir",ay);
    else
        printf("\n HATA ! Tekrar gir...");
    }while(ay>12||ay<1);
    return 0;
}
