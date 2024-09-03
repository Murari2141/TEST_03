#include <stdio.h>

void mergeSortedArrays(int arr1[], int arr2[], int merged[], int m, int n) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < m) {
        merged[k++] = arr1[i++];
    }

    while (j < n) {
        merged[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8};
    int merged[8];
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    mergeSortedArrays(arr1, arr2, merged, m, n);

    printf("Merged sorted array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }

}
