#include <stdio.h>
#include <string.h>

// Recursive function to print string in reverse
void reverse(char str[], int index)
{
    // Base case
    if (str[index] == '\0')
        return;

    // Recursive call
    reverse(str, index + 1);

    // Print after recursion (backtracking)
    printf("%c", str[index]);
}

int main()
{
    char str[100];
    scanf("%s", str);

    reverse(str, 0);

    return 0;
}