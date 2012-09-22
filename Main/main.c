#include <stdio.h>

int main(){

int napokSzama;
int korlat;
int napok[100];
int i,j;
int legmelegebbHomerseglet = 0;
int legmelegebbNap;
int korlatnalMagasabb = 0;
int idoszak = 0;
int kezdoNap = 0;
int vegsoNap = 0;

// Kezdő adatok beolvasása

printf( "Napok szama:\n" );
scanf( "%d" , &napokSzama);
printf( "Korlat:\n" );
scanf( "%d" ,&korlat );


// Napok homersegletenek beolvasa

for( i = 0; i < napokSzama; i++){
    printf("%d. nap:",i+1);
	scanf( "%d" , &napok[i] );
	printf("\n");
}

// 1. feladat : Legmelegebb nap meghatározása

for( i = 0; i < napokSzama; i++){
	if( napok[i] > legmelegebbHomerseglet ){
		legmelegebbHomerseglet = napok[i];
		legmelegebbNap = i;
	}
}
printf( "Legmelegebb nap: %d\n",legmelegebbNap+1);

// 2. feladat : Korlátnál melegebb napok száma

for( i = 0; i < napokSzama; i++){
	if( napok[i] > korlat ){
		korlatnalMagasabb++;
	}
}
printf( "K-nal magasabb napok szama: %d\n",korlatnalMagasabb);

// 3. feladat : Leghoszabb korlat feletti időszak

for( i = 0; i < napokSzama; i++){
	if( napok[i] > korlat ){
		idoszak = 0;
		for( j = i; napok[j] > korlat; j++){
				idoszak++;
		}
		
		if( idoszak > ( ( vegsoNap + 1 ) - ( kezdoNap + 1 ) ) ){
			kezdoNap = i;
			vegsoNap = j;
		} 
		i = j;
	}
}
        printf( "Legmelegebb korlatnal magasabb idoszak: %d. - %d. nap",kezdoNap+1,vegsoNap);
return 0;

}