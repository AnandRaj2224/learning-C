#include <stdio.h>
#include <stdlib.h>

// Function to print all prime factors of a given number n
void primeFactors(int n) {
    // it first prints all the 2s that are the prime factor of the number.
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }

    /* after n becomes odd the program check it the odd numbered find factors of it ,like it starts with 3 then 5 then 7...etc.*/
    for (int i = 3; i * i <= n; i = i + 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    // This condition print the last odd prime factor left.
    if (n > 2) {
        printf("%d ", n);
    }
}

// Function to find prime factors for each element in an array
void findPrimeFactors(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("Prime factors of %d: ", arr[i]);
        // each value of arr is send to prime factor function to find its prime factor 1 by 1.
        primeFactors(arr[i]); 
        printf("\n");
    }
}

int main() {
    int size;

    // Ask the user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input the array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Find and print the prime factors for each element in the array
    findPrimeFactors(arr, size);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
