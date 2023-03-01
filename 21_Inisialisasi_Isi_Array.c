#include <stdio.h>

int main()
{
    int Tab[5] = {4, 86, 2, 37, 16};
    float TabX[3] = {1.5, 3.5E2, 9.99};
    char Tabchar[4] = {'1', '2', '@', 'Z'};

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Tab[%d] = %d\n", i, Tab[i]);
    }
    printf("\n");

    int j;
    for (j = 0; j < 3; j++)
    {
        printf("TabX[%d] = %5.2f\n", j, TabX[j]);
    }
    return 0;
}