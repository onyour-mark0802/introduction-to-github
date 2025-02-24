#include<stdio.h>

int main(){
    int size;
    int product[size][size];

    printf("Input the size of the square matrix (less than 10):");
    scanf("%d",&size);

        if (size > 10){
            printf("Matrix size is too large. Please enter a size less than 10");
            return 1;
        }

        int first[size][size], second[size][size];
        printf("Input elements in the first matrix:\n");
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                printf("element - [%d], [%d] :", i, j);
                scanf("%d", &first[i][j]);
            }
        }
        printf("\nThe first matrix is: \n");
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                printf("%d ", first[i][j]);
            }
            printf("\n");
        }

        printf("Input elements in the 2nd matrix:\n");
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                printf("element - [%d], [%d] :", i, j);
                scanf("%d", &second[i][j]);
            }
        }
        printf("\nThe second matrix is: \n");
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                printf("%d ", second[i][j]);
            }
            printf("\n");
        }

        printf("\nThe product of 2 matrix is:\n");
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                product[i][j] = first[i][j] * second[i][j];
                printf("%d ", product[i][j]);
            }
            printf("\n");
        }

    return 0;
}