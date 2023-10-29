#include <stdio.h>

void rightShift(int arr[], int size, int positions) {
    int temp[size];
    
    // Copy the original array to a temporary array
    int i;
    for (i = 0; i < size; i++) {
        temp[i] = arr[i];
    }
    
    // Shift the elements to the right
    for (i = 0; i < size; i++) {
        arr[(i + positions) % size] = temp[i];
    }
}

int main() {
    int size, positions, i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number of positions to shift: ");
    scanf("%d", &positions);
    
    printf("Array before shifting:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    rightShift(arr, size, positions);
    
    printf("\nArray after shifting:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
