#include <stdio.h>
#include <stdlib.h>

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int arr1[n], arr2[n], arr3[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr1[i]);
            arr2[i] = arr1[i];
        }

        sortArray(arr2, n);

        for (int i = 0; i < n; i++) {
            arr3[i] = abs(arr1[i] - arr2[i]);
        }
        for (int i = 0; i < n; i++) {
            printf("%d ", arr3[i]);
        }
        printf("\n");
    }

    return 0;
}
