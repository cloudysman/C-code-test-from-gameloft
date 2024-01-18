#include <stdio.h>
#include <limits.h> // For INT_MAX

int FindSumOfTwoSmallest(int* a, int count) {
    if (count < 2) {
        printf("Array must have at least two elements.\n");
        return 0; // Cannot find two smallest numbers in an array of size less than 2
    }
    
    int smallest = INT_MAX;
    int second_smallest = INT_MAX;
    
    for (int i = 0; i < count; ++i) {
        if (a[i] < smallest) {
            second_smallest = smallest;
            smallest = a[i];
        } else if (a[i] < second_smallest && a[i] != smallest) {
            second_smallest = a[i];
        }
    }
    
    return smallest + second_smallest;
}

int main() {
    int count;
    printf("Enter the number of elements: ");
    scanf("%d", &count);
    
    // Make sure there is a sensible number of elements
    if (count <= 0) {
        printf("Number of elements must be positive.\n");
        return 1;
    }

    int* array = new int[count]; // Allocate memory for the array
    
    printf("Enter %d integers:\n", count);
    for (int i = 0; i < count; ++i) {
        scanf("%d", &array[i]);
    }
    
    int sum = FindSumOfTwoSmallest(array, count);
    printf("The sum of the two smallest numbers is: %d\n", sum);
    
    delete[] array; // Free the allocated memory
    return 0;
}

