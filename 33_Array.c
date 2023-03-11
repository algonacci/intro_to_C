#include <stdio.h>
#include <string.h>

int main()
{
	int listAngka[20];
	char str[20][100];
	
//	listAngka[0] = 1;
//	printf("%d\n", listAngka[0]);
//
//	listAngka[0] = 2;
//	printf("%d\n", listAngka[0]);	

	scanf("%s", str[0]);
	strcpy(str[0], "Halo");
	printf("%s\n", str[0]);
    return 0;
}
