#include <stdio.h>

int main() {
    int arr[] = {10, 45, 23, 89, 56};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];
    int secondMax = -1;

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            secondMax = max;
            max = arr[i];
        }
        else if(arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    printf("Second Maximum Element = %d", secondMax);
    return 0;
}