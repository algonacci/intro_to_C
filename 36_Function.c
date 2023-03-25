#include <stdio.h>

void printHelloWorld()
{
    printf("Hello world!\n");
}

int getNumber()
{
    return 5;
}

int sum(int a, int b)
{
    int total = a + b;
    return total;
}

int sumUsingReference(int *a, int *b)
{
    int total = *a + *b;
    return total;
}

int main()
{
    printHelloWorld();
    int a = getNumber();

    printf("%d\n", a);

    printf("=== HASIL SUM ===\n");
    int hasilSum = sum(3, 5);
    printf("%d\n", hasilSum);

    printf("=== HASIL SUM MENGGUNAKAN REFERENCE ===\n");
    int first = 10;
    int second = 5;
    int hasilSumReference = sumUsingReference(&first, &second);
    printf("%d\n", hasilSumReference);

    return 0;
}
