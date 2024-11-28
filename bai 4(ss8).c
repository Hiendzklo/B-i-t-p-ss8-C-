#include <stdio.h>

int main() {
    int rows = 3, cols = 3; 
    int matrix[3][3] = {
        {5, 12, 7},
        {9, 3, 15},
        {8, 6, 4}
    };
    int max = matrix[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max);
}

