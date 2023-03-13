#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//struct(yapi) ile girilecek bilgiler tanimlandi
typedef struct{
char adSoyad[20];
int numara;
float basariSirasi;
float basariPuani;
char okuduguOkul[30];
char ilIlce[35];	
}bilgiler;


int main(int argc, char *argv[]) {
bilgiler ogrenci1,*ogrenci2,*ogrenci3,ogrenci4,ogrenci5;
ogrenci2=(bilgiler *)malloc(sizeof(bilgiler));
ogrenci3=(bilgiler *)malloc(sizeof(bilgiler)); //Pointer ile tanimlanan ögrenci bilgileri icin bellekte yer ayiriyoruz (ogrenci2,ogrenci3) 

//1.ogrenci hakkinda bilgiler
strcpy(ogrenci1.adSoyad,"Furkan Gorur"); // dizi veri tipli degisken yazabilmek için strcpy kullaniyoruz 
ogrenci1.numara=5040;
ogrenci1.basariSirasi=101.047;
ogrenci1.basariPuani=414.234;
strcpy(ogrenci1.okuduguOkul,"Kirklareli universitesi");
strcpy(ogrenci1.ilIlce,"Istanbul-Basaksehir");

printf("1.Ogrencinin bilgileri\n\n");
printf("Ogrenci isim-soyisim:%s ",ogrenci1.adSoyad);
printf("\n");
printf("Ogrenci okul numarasi: %d",ogrenci1.numara);
printf("\n");
printf("Ogrenci siralama ve puani: %3.3f - %3.3f",ogrenci1.basariSirasi,ogrenci1.basariPuani);
printf("\n");
printf("Ogrencinin okudugu okul: %s",ogrenci1.okuduguOkul);
printf("\n");
printf("Ogrencinin bulundugu il ve ilce: %s",ogrenci1.ilIlce);
printf("\n\n");

//2.ogrenci hakkinda bilgiler (isaretci ile tanimli)
strcpy(ogrenci2->adSoyad,"Haydar Okkan");
ogrenci2->numara=9870;
ogrenci2->basariSirasi=23.456;
ogrenci2->basariPuani=457.787;
strcpy(ogrenci2->okuduguOkul,"Istanbul universitesi");
strcpy(ogrenci2->ilIlce,"Mus - Varto");

printf("2.Ogrencinin bilgileri\n\n");
printf("Ogrenci isim-soyisim:%s ",ogrenci2->adSoyad);
printf("\n");
printf("Ogrenci okul numarasi: %d",ogrenci2->numara);
printf("\n");
printf("Ogrenci siralama ve puani: %3.3f - %3.3f",ogrenci2->basariSirasi,ogrenci2->basariPuani);
printf("\n");
printf("Ogrencinin okudugu okul: %s",ogrenci2->okuduguOkul);
printf("\n");
printf("Ogrencinin bulundugu il ve ilce: %s",ogrenci2->ilIlce);
printf("\n\n");

//3.ogrenci hakkinda bilgiler (isaretci ile tanýmlý)
strcpy(ogrenci3->adSoyad,"Aykut Kocaman");
ogrenci3->numara=16870;
ogrenci3->basariSirasi=256.789;
ogrenci3->basariPuani=360.134;
strcpy(ogrenci3->okuduguOkul,"Ege universitesi");
strcpy(ogrenci3->ilIlce,"Izmir-Foca");

printf("3.Ogrencinin bilgileri\n\n");
printf("Ogrenci isim-soyisim:%s ",ogrenci3->adSoyad);
printf("\n");
printf("Ogrenci okul numarasi: %d",ogrenci3->numara);
printf("\n");
printf("Ogrenci siralama ve puani: %3.3f - %3.3f",ogrenci3->basariSirasi,ogrenci3->basariPuani);
printf("\n");
printf("Ogrencinin okudugu okul: %s",ogrenci3->okuduguOkul);
printf("\n");
printf("Ogrencinin bulundugu il ve ilce: %s",ogrenci3->ilIlce);	
printf("\n\n");

//4.ogrenci hakkinda bilgiler
strcpy(ogrenci4.adSoyad,"Volkan Bayindir");
ogrenci4.numara=6843;
ogrenci4.basariSirasi=12.047;
ogrenci4.basariPuani=487.234;
strcpy(ogrenci4.okuduguOkul,"Cerrahpasa Universitesi");
strcpy(ogrenci4.ilIlce,"Ankara - Ulus");

printf("4.Ogrencinin bilgileri\n\n");
printf("Ogrenci isim-soyisim: %s ",ogrenci4.adSoyad);
printf("\n");
printf("Ogrenci okul numarasi: %d",ogrenci4.numara);
printf("\n");
printf("Ogrenci siralama ve puani: %3.3f - %3.3f",ogrenci4.basariSirasi,ogrenci4.basariPuani);
printf("\n");
printf("Ogrencinin okudugu okul: %s",ogrenci4.okuduguOkul);
printf("\n");
printf("Ogrencinin bulundugu il ve ilce: %s",ogrenci4.ilIlce);
printf("\n\n");

//5.ogrenci hakkinda bilgiler
strcpy(ogrenci5.adSoyad,"Idris Helvaci");
ogrenci5.numara=1436;
ogrenci5.basariSirasi=405.424;
ogrenci5.basariPuani=264.908;
strcpy(ogrenci5.okuduguOkul,"Gebze Uninersitesi");
strcpy(ogrenci5.ilIlce,"Istanbul-Avcilar");

printf("5.Ogrencinin bilgileri\n\n");
printf("Ogrenci isim-soyisim:%s ",ogrenci5.adSoyad);
printf("\n");
printf("Ogrenci okul numarasi: %d",ogrenci5.numara);
printf("\n");
printf("Ogrenci siralama ve puani: %3.3f - %3.3f",ogrenci5.basariSirasi,ogrenci5.basariPuani);
printf("\n");
printf("Ogrencinin okudugu okul: %s",ogrenci5.okuduguOkul);
printf("\n");
printf("Ogrencinin bulundugu il ve ilce: %s",ogrenci5.ilIlce);
printf("\n\n");


return 0;	
	}
