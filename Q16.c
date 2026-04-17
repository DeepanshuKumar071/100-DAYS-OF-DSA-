#include <stdio.h>

int main()
{
    int n;

    // Input size
    scanf("%d", &n);

    int arr[n];

    // Input array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Frequency count
    for (int i = 0; i < n; i++)
    {
        int count = 1;

        // Check if already counted
        int visited = 0;
        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                visited = 1;
                break;
            }
        }

        if (visited)
            continue;

        // Count occurrences
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        // Print result
        printf("%d:%d ", arr[i], count);
    }

    return 0;
}