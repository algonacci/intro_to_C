#include<stdio.h>

int main()
{
    int a;
    float x;

    printf("Ketik nilai sebuah bilangan riil: ");
    scanf("%f", &x);
    printf("Nilai yang dibaca: %f\n", x);
    
    printf("Contoh membaca dan menulis, ketik nilai integer: ");
    scanf("%d", &a);
    printf("Nilai yang dibaca: %d\n", a);

    printf("Sukses menerima input");
    
    return 0;
}