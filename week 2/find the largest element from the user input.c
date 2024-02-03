
#include<stdio.h>
int main(){

int length;
printf("Enter the size of the array: ");
scanf("%d", &length);
int arr[length];

    printf("Enter %d numbers \n", length);

    for(int i=0; i<length; i++){
            printf("index %d\t= ", i+1);

        scanf("%d",&arr[i]);
    }

int max = arr[0];
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i]< max){
            max = arr[i];
        }
    }

    printf("Max %d", max);

    return 0;
}
