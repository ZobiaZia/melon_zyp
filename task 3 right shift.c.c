#include <stdio.h>

void circularRightShift(int arr[], int size, int shifts) {
    int temp, i, j;
    
    // Perform the circular right shift 'shifts' number of times
    for (i = 0; i < shifts; i++) {
        // Store the last element of the array
        temp = arr[size - 1];
        
        // Shift each element to the right
        for (j = size - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        
        // Place the stored element at the beginning of the array
        arr[0] = temp;
    }
}

int main() {
    int size, shifts, i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number of positions to shift: ");
    scanf("%d", &shifts);
    
    circularRightShift(arr, size, shifts);
    
    printf("Array after circular right shift: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
