#include <stdio.h>
int main(){

int yas;
float boy;
int kilo;
float vki;

printf("Yasinizi Giriniz: \n");
scanf("%d",&yas);
printf("Boyunuzu Metre Cinsinden Giriniz: \n");
scanf("%f",&boy);
printf("Kilonuzu Giriniz: \n");
scanf("%d",&kilo);

vki = kilo / (boy*boy) ;

printf("Vucut Kitle Endeksiniz: %2f \n",vki);

if((yas>=13 && yas<=17) && (vki>=18.50 && vki<=24.99))
printf("Kabul Edildiniz.");

else if(!(yas>=13 && yas<=17))
printf("Yasinizdan Dolayi Kabul Edilmediniz.");

else
printf("Vucut kitle indeksinizden dolayi kabul edilmediniz.");


}