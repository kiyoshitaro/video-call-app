#include <stdio.h>

int main() {
    printf("\n Họ và tên : Nguyễn Tuấn Hưng");
    printf("\n Nhập số phần tử :");
    int n;
    scanf("%d", &n);
    float a[n];
    int i = 0;
    for (i = 0; i < n; i++) {
        printf("\n Phần tử thứ %d ", i + 1);
        scanf("%f", &a[i]);
    }
    int j = 0;
    for (i = 0; i < n; i++) {
        for (j = i; j <= n - 1; j++) {
            if (a[i] >= a[j]) {
                float tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
    }
    printf("Dãy sắp theo thứ tự là: \n");
    for (i = 0; i < n; i++) {
        printf("%0.2f  ",a[i]);
    }
    return 0;
}