#include <stdio.h>

int main()
{
    int a;
    printf("Contoh IF tiga kasus \n");
    printf("Ketikkan suatu nilai integer :");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("Nilai A Positif %d", a);
    }
    else if (a == 0)
    {
        printf("Nilai Nol %d \n", a);
    }
    else
    {
        printf("Nilai a negatif %d", a);
    }
    return 0;
}