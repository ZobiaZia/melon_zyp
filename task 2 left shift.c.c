#include <stdio.h>

void leftShift(int arr[], int size, int positions) {
    int i, j;
    
    // Perform left shift
    for (i = 0; i < positions; i++) {
        int temp = arr[0];
        
        for (j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        
        arr[size - 1] = temp;
    }
}

int main() {
    int size, positions, i;
    
    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    // Input array elements
    printf("Enter the array elements:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input number of positions to shift
    printf("Enter the number of positions to shift: ");
    scanf("%d", &positions);
    
    // Print array before shift
    printf("Array before shift: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Perform left shift
    leftShift(arr, size, positions);
    
    // Print array after shift
    printf("Array after shift: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
