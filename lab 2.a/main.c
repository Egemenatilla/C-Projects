#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int note;
    printf("Ogrencinin notunu giriniz:");
    scanf("%d",&note);
    if(note>100){
        printf("0 ile 100 arasinda bir sayi giriniz");
        return 0;
    }
    if(note>=90)
        printf("AA");
    else if (note>=85 && note <90)
        printf("BA");
    else if (note>=80 && note <85)
        printf("BB");
    else if (note>=70 && note <80)
        printf("CB");
    else if (note>=60 && note <70)
        printf("CC");
    else if (note>=55 && note <60)
        printf("DC");
    else if (note>=50 && note <55)
        printf("DD");
    else if (note>=40 && note <50)
        printf("FD");
    else
        printf("FF");
    */

    int sayi,b,o,y;
    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);
    if(sayi<100 || sayi>999)
    {
        printf("Girilen sayi uc basamakli olmak zorundadir.");
        return 0;
    }
    if(sayi%2==0)
        printf("sayi cifttir\n");
    else
        printf("sayi tektir\n");
    y=sayi/100;
    o=(sayi-y*100)/10;
    printf("%d",o);




    return 0;
}
