#include <stdio.h>

int add(int a, int b)
{
    return (a + b);
}

int increment(int a)
{
    return (a + 1);
}

int main()
{
    int x = 10;
    int y = 25;

    printf("Hasil penjumlahan x+y = %d", add(x, y));
    printf("Hasil penjumlahan 3+2 = %d", add(3, 2));

    printf("nilai x   : %d\n", x);
    printf("nilai x  setelah ditambah 1 : %d\n", increment(x));
    printf("nilai 5  setelah ditambah 1 : %d\n", increment(5));

    return 0;
}