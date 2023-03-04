#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int MIN = 1;
    const int MAX = 100;

    for (int i = 0; i < 5; i++)
    {
        printf("%d", rand() % MAX + MIN);
    }

    return 0;
}