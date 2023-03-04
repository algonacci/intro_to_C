#include <stdio.h>

int main()
{
    int i;
    int arr[10] = {1, 50, 6, 200, 3, 100, 30, 9, 99, 100};
    int max;
    int k, temp;

    for (i = 0; i < 9; i++)
    {
        max = i;
        for (k = i + 1; k < 10; k++)
        {
            if (arr[k] > arr[max])
            {
                max = k;
            }
        }
    }

    temp = arr[i];
    arr[i] = arr[max];
    arr[max] = temp;

    for (i = 0; i < 10; i++)
    {
        printf("%d; ", arr[i]);
    }

    return 0;
}