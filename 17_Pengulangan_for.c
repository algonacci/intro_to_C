#include <stdio.h>

int main()
{
    int i;
    printf("Masukkan jumlah baris yang ingin di-print\n");
    scanf("%d", &i);
    for (; i > 0; i--)
    {
        printf("Saya senang belajar bahasa C\n");
    }
    return 0;
}