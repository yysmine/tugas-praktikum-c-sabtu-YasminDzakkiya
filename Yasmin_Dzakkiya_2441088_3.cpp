#include <stdio.h>
#include <cmath>

int main() {
	
	float A = 4.0;
	float B = 5.0;
	float C = sqrt (A*A + B*B);
	
	printf("Diketahui panjang sisi alas segitiga siku 4 cm.\n");
	printf("Dan sisi tinggi segitiga siku 5 cm.\n");
	printf("Maka sisi miring segitiga tersebut adalah...?\n");
	
	printf(" Jawab : Sisi miring segitiga adalah %.1fcm^2", C);

	return 0;
	
	
}
