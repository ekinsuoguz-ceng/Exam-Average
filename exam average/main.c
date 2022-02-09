#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i,j,sayi,vize;
	int dizi[100][3],ortalama;
	
	printf("ogrenci sayini yaziniz(max 100): ");
	scanf("%d",&sayi);
	
	for(i=0; i<sayi; i++){
		for(j=0; j<2; j+=2){
		printf("%d. ogrencinin vize notlarini giriniz: ",i+1);
		scanf("%d",&dizi[i][j]);
		printf("%d. ogrencinin final notlarini giriniz: ",i+1);
		scanf("%d",&dizi[i][j+1]);
			}
			printf("\n");
	}

	printf("Ogrenci No\tVize Notu\tFinal Notu\tOrtalama");
	
	for(i=0; i<sayi; i++){
		printf("\nNO: %d",i+1);
		
		for(j=0; j<2; j+=2){
			printf("\t\t%d",dizi[i][j]);
			printf("\t\t%d",dizi[i][j+1]);
			ortalama=(dizi[i][j]+dizi[i][j+1])/2;
			printf("\t\t%d",ortalama);
		}
	}
					
	return 0;
}
