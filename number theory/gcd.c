#include <stdio.h>

// Function to compute the GCD of two numbers uses euclidean algorithm 
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to compute the GCD of an array of integers
int gcd_array(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = gcd(result, arr[i]);
        if (result == 1) {
            return 1; // Early exit if GCD becomes 1
        }
    }
    return result;
}

int main() {
    int n;
    
    // Input: number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input: elements of the array
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Compute GCD of the array
    int result = gcd_array(arr, n);
    
    // Output the result
    printf("GCD of the array is: %d\n", result);
    
    return 0;
}
