#include<stdio.h>

void main(){
    int length;
    printf("Enter the length: ");
    scanf("%d", &length);
    int arr[length];

    printf("\n");

    for(int i=0; i<length; i++){
        printf("Index %d = ", i+1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for(int i=1; i<length; i++){
            if(arr[i]>max){
                max = arr[i];
            }
    }
    printf("\n\n Max element = %d", max);
}
