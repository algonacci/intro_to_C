#include <stdio.h>

int main()
{
    float panjang, lebar, luas;

    printf("Masukkan panjang lantai (m): ");
    scanf("%f", &panjang);

    printf("Masukkan lebar lantai (m): ");
    scanf("%f", &lebar);

    luas = panjang * lebar;
    printf("Luas lantai adalah: %.2f m2", luas);

    return 0;
}
