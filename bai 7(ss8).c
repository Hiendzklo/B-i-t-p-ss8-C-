#include <stdio.h>

int main() {
    int n;
    printf("Nhap kich thuoc cua ma tran vuong: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Nhap cac phan tu cua ma tran (%dx%d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = 0;
    printf("Cac phan tu tren duong cheo chinh la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }
    printf("\nTong cac phan tu tren duong cheo chinh la: %d\n", sum);
}

