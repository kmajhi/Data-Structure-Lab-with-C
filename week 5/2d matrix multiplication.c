#include<stdio.h>

void main(){

    int arrA[2][2];
    int arrB[2][2];
    int result[2][2];

    int length = 2;
    int i, j, k;


    printf("Enter the elements for matrix A : \n\n");

    for( i=0; i<length; i++){
            for(j=0; j<length; j++){
                scanf("%d", &arrA[i][j]);
            }
        }


    printf("Enter the elements for matrix B: \n\n");

    for( i=0; i<length; i++){
            for(j=0; j<length; j++){
                scanf("%d", &arrB[i][j]);
            }
        }


    printf("\n\nMatrix A: \n");

    for( i=0; i<length; i++){
            for(j=0; j<length; j++){
                printf("%d\t", arrA[i][j]);
            }
            printf("\n");
        }

    printf("\n\nMatrix B: \n\n");

    for( i=0; i<length; i++){
            for(j=0; j<length; j++){
                printf("%d\t", arrA[i][j]);
            }
            printf("\n");
        }

    for (i = 0; i < length; i++){
        for (j = 0; j < length; j++) {
            result[i][j] = 0;
            for (k = 0; k < length; k++) {
                result[i][j] = result[i][j] + arrA[i][k] * arrB[k][j];
            }
        }
    }



    printf("\n\nAnswer: \n");
    for (i = 0; i < length; i++){
        for (j = 0; j < length; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
 }
