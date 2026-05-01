#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    // Edge case check
    if (n <= 0)
    {
        printf("Invalid input");
        return 0;
    }

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    // Find max and min
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    // Output
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    return 0;
}