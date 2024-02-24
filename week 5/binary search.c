#include<stdio.h>
int main(){
int position, i, n, value;

    printf("Enter length of the array: ");
    scanf("%d", &n);
    int array[n];

    printf("\n\nEnter %d elements\n", n);

    for (i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &value);

    int low = 0;
    int high = n - 1;
    int result = -1;

    while (low <= high){
        int mid = low + (high - low) / 2;

        if (array[mid] == value) {
            result = mid;
            break;
        }

        if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);

    return 0;
}
