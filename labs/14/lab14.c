#include <stdio.h>
#define SIZE 100

int linearize(int n, int matt[SIZE][SIZE]) {
    printf("Linearized mattrix: ");

    int k = 1;
    int i_1 = 0;
    int j_1 = 0;
    int i_2 = 0;
    int j_2 = 0;

    if (n > 1) {
        int i = n - 1;
        int j = n - 1;
        int kol = n;
        while (k < n*2) {
            if (k % 2 != 0) {
                for (int q = 0; q < kol; q++) {
                    printf("%d ", matt[i - q][j - q]);
                }

                j = i_1 + j_1 + 1;
                i = 0;
                j_1++;
                kol--;
                k++;
            }
            else {
                j_2 = j;
                i_2 = i;
                for (int q = 0; q < kol; q++) {
                    printf("%d ", matt[i + q][j + q]);
                    i_2++;
                    j_2++;
                }
                i = j_2-1;
                j = i_2-1;
                k++;
            }
        }
    }
}

int main(void) {
    int size = 0;
    printf("Enter mattrix size: ");
    scanf_s("%d", &size);

    int mattrix[SIZE][SIZE];
    printf("Source mattrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            scanf_s("%d", &mattrix[i][j]);
    }
    linearize(size, mattrix);
    printf("\n");
    return 0;
}