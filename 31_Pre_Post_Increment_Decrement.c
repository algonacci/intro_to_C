#include <stdio.h>

int main() {
	int angka = 0;
	printf("%d\n", ++angka);
	printf("%d\n", angka);
	printf("========\n");
	
	int angka1 = 0;
	printf("%d\n", angka1++);
	printf("%d\n", angka1);
	printf("========\n");
	
	int angka2 = 0;
	printf("%d\n", --angka2);
	printf("%d\n", angka2);
	printf("========\n");
	
	int angka3 = 0;
	printf("%d\n", angka3--);
	printf("%d\n", angka3);
	printf("========\n");
	
	return 0;
}
