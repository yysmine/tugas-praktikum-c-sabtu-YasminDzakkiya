#include <stdio.h>

int main() {
	
	float alas=8.0;
	float tinggi=5.0;
	float luas;
	
	printf("Diketahui panjang alas segitiga 8 cm.\n");
	printf("Dan tinggi segitiga 5 cm.\n");
	printf("Maka luas segitiga tersebut adalah...?\n");
	
	luas=0.5*alas*tinggi;
	
	printf(" Jawab : Luas segitiga adalah %2.fcm^2", luas);

	return 0;
	
}
