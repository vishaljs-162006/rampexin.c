#include <stdio.h>

int main() {
    int arr[5] = {10, 25, 5, 60, 30}; 
    int i, max;

    max = arr[0];  

    for (i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
    }

    printf("Largest num: %d\n", max);

    return 0;
}
