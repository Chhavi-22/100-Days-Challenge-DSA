//Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.
#include <stdio.h>
int main()
{
    int n, pos, x, i;
    // Input size of array
    scanf("%d", &n);
    int arr[n+1];   // Extra space for new element
    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Input position (1-based)
    scanf("%d", &pos);

    // Input element to insert
    scanf("%d", &x);

    // Shift elements to the right
    for(i = n; i >= pos; i--)
    {
        arr[i] = arr[i-1];
    }
    // Insert element
    arr[pos-1] = x;

    // Print updated array
    for(i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

