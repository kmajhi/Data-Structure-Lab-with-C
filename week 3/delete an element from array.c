#include <stdio.h>

void main() {
    int position, i, n, value;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int array[n];

    printf("\n\nEnter %d elements\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    printf("Enter the position: \n");
    scanf("%d", &position);

    for (i = position - 1; i < n - 1; i++) {
        array[i] = array[i + 1];
    }

    printf("\n\n The array: \n");

    for (i = 0; i < n - 1; i++)
        printf("%d \t", array[i]);
}
