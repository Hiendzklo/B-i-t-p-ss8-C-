#include <stdio.h>

int main() {
    int array[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int n = sizeof(array) / sizeof(array[0]);
    int freq[n];
    for (int i = 0; i < n; i++) {
        freq[i] = -1; 
    }
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (array[i] == array[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }
    int maxFreq = 0, mostFrequent;
    for (int i = 0; i < n; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFrequent = array[i];
        }
    }
    printf("Phan tu xuat hien nhieu nhat la: %d\n", mostFrequent);
}

