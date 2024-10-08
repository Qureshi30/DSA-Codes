#include <stdio.h>

void insertionsort(int *a, int n)
{
    int i, j, k, temp;

    // Iterate through the array, starting from the second element
    for (i = 1; i < n; i++)
    {
        temp = a[i]; // Store the current element
        j = i - 1;

        // Shift elements of the sorted part of the array to the right
        while ((temp < a[j]) && (j >= 0))
        {
            a[j + 1] = a[j];
            j = j - 1;
        }

        // Insert the current element in the correct position
        a[j + 1] = temp;

        // Print the array after each pass
        printf("\nPass %d: ", i);
        for (k = 0; k < n; k++)
            printf("%d ", a[k]);
    }
}

int main()
{
    int n, i, a[20];

    // Input the number of elements
    printf("Enter total elements: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Call the insertion sort function
    insertionsort(a, n);

    // Print the sorted array
    printf("\nAfter sorting: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
