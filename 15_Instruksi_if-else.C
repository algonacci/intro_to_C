#include <stdio.h>

int main()
{
    int a;
    printf("Contoh IF dua kasus \n");
    printf("Ketikkan suatu nilai integer:");
    scanf("%d", &a);
    if (a >= 0)
    {
        printf("Nilai A positif %d", a);
    }
    else
    {
        printf("Nilai A negatif %d", a);
    }
    return 0;
}