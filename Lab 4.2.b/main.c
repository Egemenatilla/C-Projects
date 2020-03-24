//Oyun icerigine read me ile ulasabilirsiniz.
#include <stdio.h>
#include <stdlib.h>

void menu()
{
    int secim;
    do{
    printf("1-Asal Sayi Bulma\n");
    printf("2-En Kucuk Sayi Bulma\n");
    printf("3-Cikis\n");
    printf("Bir Secim Giriniz:\n");
    scanf("%d",&secim);

    if(secim==1)
    {
        asal();
    }
    else if(secim==2)
    {
        mini();
    }
    else if(secim==3)
        break;
    if(secim!=1 && secim!=2 && secim!=3)
        printf("Lutfen dogru deger giriniz (1,2,3).\n");
    }while(1);
    printf("\nProgramdan Cikiliyor");

}

void asal(){
    int a,b;
    int asal=0;
    printf("\nAlt ve Ust Sinir Giriniz\n");
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i=a;i<=b;i++){
        asal=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                asal+=1;
            }
        }
        if(asal==2){
            printf("%d ",i);
        }
    }
    printf("\n");
}
void mini()
{
    int a,b,c,min;
    printf("Sayilari giriniz:\n");
    scanf("%d",&a);
    min=a;
    scanf("%d",&b);
    scanf("%d",&c);
    if(b<a)
        printf("%d",b);
    else if(c<a)
        printf("%d",c);
    else
        printf("%d",a);


}
int main()
{
    menu();
    return 0;
}
