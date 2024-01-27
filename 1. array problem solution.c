//Question: Find sum of the input numbers from array.
//Question: take input for array length and do the rest code

#include<stdio.h>
int main(){

int length;
printf("Enter the size of the array: ");
scanf("%d", &length);
int arr[length];
int sum = 0;

    printf("Enter %d numbers \n", length);

    for(int i=0; i<length; i++){
            printf("index %d\t= ", i);

        scanf("%d",&arr[i]);
    }


    printf("\n\n** Inserted elements are: **\n\n");

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        printf("A[%d] \t= %d \n", i, arr[i]);
        sum = sum + arr[i];
    }

    printf("\n\nSum is \t= %d", sum);

    return 0;
}
