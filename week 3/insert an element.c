#include <stdio.h>

void main(){
    int position, i, n, value;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int array[n];

    printf("\n\nEnter %d elements\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    printf("Enter the position: \n");
    scanf("%d", &position);

    printf("\n\nEnter the new element: \n");
    scanf("%d", &value);

    for (i = n - 1; i >= position - 1; i--)
        array[i+1] = array[i];

    array[position-1] = value;

    printf("\n\n The array: \n");

    for (i = 0; i <= n; i++)
        printf("%d \t", array[i]);
}
