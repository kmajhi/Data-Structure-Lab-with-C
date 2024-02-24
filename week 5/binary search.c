#include<stdio.h>
int main(){
int position, i, n, item;

    printf("Enter array length: ");
    scanf("%d", &n);
    int arr[n];

    printf("\n\nEnter %d elements\n", n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the item to search: ");
    scanf("%d", &item);

    int low = 0;
    int high = n - 1;
    int result = -1;

    while (low <= high){
        int mid = low + (high-low) / 2;
        
        if (arr[mid] == item) {
            result = mid;
            break;
        }

        if (arr[mid] < item)
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
