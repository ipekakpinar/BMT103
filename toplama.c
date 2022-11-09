#include <stdio.h>
int main(){

int k;
int n;
float sonuc;

printf("bir sayi gir \n");
scanf("%d",&n);

for(k=1; k<=n ; k++){

    sonuc= ((k*k+1.23)/(k-0.25));
    sonuc+=sonuc;
    
}
printf("%f",sonuc);
return 0 ;
}