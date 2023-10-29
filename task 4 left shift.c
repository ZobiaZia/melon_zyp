#include <stdio.h>

void circular_shift_left(int arr[], int size, int positions) {
    int temp;
    
    // Perform the circular shift
    int i, j;
    for (i = 0; i < positions; i++) {
        temp = arr[0];
        
        for (j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        
        arr[size - 1] = temp;
    }
}

int main() {
    int size, positions, i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number of positions to shift: ");
    scanf("%d", &positions);
    
    circular_shift_left(arr, size, positions);
    
    printf("Array after circular shift to the left:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
