#include <stdio.h>

// Function to partition the array and recursively sort it
void partition(int *a, int low, int high);
void mergesort(int *a, int low, int mid, int high);

int main()
{
    int n, i, a[20];

    // Input the number of elements
    printf("Enter total number of elements: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Start the merge sort by partitioning the array
    partition(a, 0, n - 1);

    // Print the sorted array
    printf("\nAfter sorting: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

// Function to partition the array into two halves recursively
void partition(int *a, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;       // Find the middle point
        partition(a, low, mid);       // Recursively sort the left half
        partition(a, mid + 1, high);  // Recursively sort the right half
        mergesort(a, low, mid, high); // Merge the two halves
    }
}

// Function to merge two sorted halves
void mergesort(int *a, int low, int mid, int high)
{
    int i, j, k, temp[20];
    i = low;     // Iterator for the left half
    j = mid + 1; // Iterator for the right half
    k = low;     // Iterator for the merged array

    // Merge the left and right halves into the temp array
    while (i <= mid && j <= high)
    {
        if (a[i] <= a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements from the left half, if any
    while (i <= mid)
    {
        temp[k] = a[i];
        i++;
        k++;
    }

    // Copy remaining elements from the right half, if any
    while (j <= high)
    {
        temp[k] = a[j];
        j++;
        k++;
    }

    // Copy the sorted elements back into the original array
    for (i = low; i <= high; i++)
    {
        a[i] = temp[i];
    }
}
