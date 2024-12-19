#include <stdio.h>

int main() {
    int n, found = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
    	 printf("%d = ",i);
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Nhap so can tim ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Vi tri cua phan tu trong mang la: %d\n", i);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("khong co trong danh sach\n");
    }

    return 0;
}