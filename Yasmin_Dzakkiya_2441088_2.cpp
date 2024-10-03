#include <stdio.h>

int main() {
	float diameter=15.0;
	float r = diameter/2.0;
	float volume;
	
	printf("Diketahui bangun ruang berdiameter 15 cm.\n");
	printf("Maka isi (volume) bangun tersebut adalah...?\n");
	
	r=diameter/2.0;
	volume=(4.0/3.0)*3.14*(r*r*r);
	
	printf("volume bangun ruang adalah %2.fcm^3", volume);
	
	return 0;
}
