#include <stdio.h>

int main()
{
    int a = 0;
    int *pointer;
    int **pointer2;
    pointer = &a;
    pointer2 = &pointer;

    printf("Value dari integer a %d\n", a);
    printf("Alamat dari integer a %d\n", &a);
    printf("Value dari pointer yang merupakan alamat integer a %d\n", pointer);
    printf("Value dari pointer %d\n", *pointer);
    printf("Alamat dari pointer %d\n", &pointer);

    printf("==========\n");

    printf("%d\n", **pointer2);
    printf("%d\n", &pointer);

    return 0;
}
