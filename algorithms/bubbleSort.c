#include <stdio.h>

/*
 * Bubble Sort Algorithm: 
 * Each array element is compared with every other element in an organized sequence. 
 * When one value is larger (or smaller) than another, the values are swapped. 
 */

int main() {
    const int size = 7;
    int bubble[] = { 75, 40, 5, 67, 30, 14, 1 };
    int inner, outer, temp, x;

    // Print original array
    printf("Original data: ");
    for(x = 0; x < size; x++) {
        printf("%d ",bubble[x]);
    }
    putchar('\n');
        
    // Bubble sort
    for(outer = 0; outer < size-1; outer++) {
        for(inner = outer+1; inner < size; inner++) {
            if(bubble[outer] > bubble[inner]) {
                temp = bubble[outer];
                bubble[outer] = bubble[inner];
                bubble[inner] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted data: ");
    for(x = 0; x < size; x++) {
        printf("%d ", bubble[x]);
    }
    
    return(0);
}