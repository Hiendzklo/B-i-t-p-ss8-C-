#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int length = sizeof(array) / sizeof(array[0]);
    printf("Cac phan tu trong mang tu cuoi ve dau la:\n");
    for (int i = length - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
}

