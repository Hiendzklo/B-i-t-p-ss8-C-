#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen (kich thuoc ma tran): ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Nhap cac phan tu cua ma tran %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Ma tran vuong %dx%d la:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

