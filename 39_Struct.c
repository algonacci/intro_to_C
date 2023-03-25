#include <stdio.h>

struct rectangle
{
    int length;
    int width;
};

struct person
{
    char name[200];
    int age;
};

struct info
{
    struct person pemilik;
    struct rectangle luasBangunan;
};

int main()
{
    struct rectangle kotak1;

    struct person orang1 = {"Eric", 21};

    kotak1.length = 10;
    kotak1.width = 5;

    printf("Luas %d\n", kotak1.length * kotak1.width);
    printf("===================\n");
    printf("%s %d\n", orang1.name, orang1.age);

    printf("===================\n");
    struct info infoBangunan = {
        {"Adi", 25}, {20, 10}};
    printf("%s berumur %d memiliki luas bangunan = %d",
           infoBangunan.pemilik.name,
           infoBangunan.pemilik.age,
           infoBangunan.luasBangunan.length * infoBangunan.luasBangunan.width);

    return 0;
}
