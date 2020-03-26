//Tabanı ve üstü girilen üstlü sayının sonucunu bulur.
#include <stdio.h>
#include <stdlib.h>

int ust(int a,int b)
{
    if(b==0)
        return 1;
    if(b==1)
        return a;
    else
        return a*ust(a,b-1);
}

int main()
{
   int ust,taban;
   int sonuc=1;
   int sonuc2=1;
   printf("ust");
   scanf("%d",&ust);
   printf("taban");
   scanf("%d",&taban);

   if(ust==0)
    return 1;
   else if(ust==1)
    return taban;
   else
   {
       for(int i=0;i<ust;i++)
        sonuc=taban*taban;
        sonuc2=sonuc*taban;
   }
   printf("%d",sonuc2);
    return 0;
}
