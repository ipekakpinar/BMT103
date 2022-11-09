#include <stdio.h>
int main(){

int i;
int j;
int satir;

printf("bir sayi giriniz:\n");
scanf("%d",&satir);

for(i=1; i<=satir; i++){ 

for(j=1; j<=i; j++){
    printf("#");
}
printf("\n");
}
return 0 ;
}