#include <stdio.h>

int main() {
    int n;
    printf("Nhap n ");
    scanf("%d", &n);

    int arr[n][n];
    printf("Nhap cac phan tu \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d\n", &arr[i][j]);
        }
    }

    printf("Cac phan tu tren duong cheo chinh la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][n-1-i]);
    }
    printf("\n");

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i][n-1-i];
    }
    printf("Tong cac phan tu tren duong cheo chinh la: %d\n", sum);

    return 0;
}