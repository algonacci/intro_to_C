#include <stdio.h>

int main()
{
	//	int angka = 5;
	//	switch(angka) {
	//		case 1:
	//			printf("satu\n");
	//			break;
	//		case 5:
	//			printf("lima\n");
	//			break;
	//	}

	int nilai = 2;
	printf("%s", (nilai % 2 == 0 ? "genap" : "ganjil"));
	return 0;
}
