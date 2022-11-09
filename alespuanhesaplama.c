#include <stdio.h>
int main(){

int ales;
int yabanci_dil;
int agno;
float sonuc;

printf("ALES puaninizi giriniz: \n");
scanf("%d",&ales);
printf("Yabanci dil puaninizi giriniz: \n");
scanf("%d",&yabanci_dil);
printf("Mezuniyet ortalamanizi giriniz: \n");
scanf("%d",&agno);

sonuc = ales*0.5 + yabanci_dil*0.25 + agno*0.25;

printf("Siralama puaniniz:%2f \n",sonuc);

if(sonuc>60)
printf("Siralamaya girdiniz.");

else
printf("Siralamaya giremediniz.");

//50 40 20
}