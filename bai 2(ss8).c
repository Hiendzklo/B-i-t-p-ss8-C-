#include <stdio.h>

int main() {
    int array[] = {5, 12, 7, 9, 20, 15};
    int length = sizeof(array) / sizeof(array[0]); 
    int input; 
    int found = 0; 
    printf("Nhap phan tu can kiem tra: ");
    scanf("%d", &input);
    for (int i = 0; i < length; i++) {
        if (array[i] == input) {
            printf("Vi tri phan tu trong mang la: %d\n", i);
            found = 1; 
            break; 
        }
    }
    if (!found) {
        printf("Phan tu khong ton tai trong mang.\n");
    }
}

