#include <stdio.h>

int main()
{
    int i;
    int arr[10] = {1, 50, 6, 200, 3, 100, 30, 9, 99, 100};
    int max;

    max = arr[0];

    for (i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("The maximum value is %d", max);

    return 0;
}