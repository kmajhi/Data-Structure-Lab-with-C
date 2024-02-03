#include<stdio.h>

void main() {
    int arr[] = {36, 20, 60, 75, 23, 15};
    int length = sizeof(arr) / sizeof(arr[0]);
    int temp;

    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Answer = %d\n", arr[length - 2]);
}
