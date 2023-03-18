#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("\n Họ và tên : Nguyễn Tuấn Hưng");
    printf("\n Nhập số phần tử :");
    int n;
    scanf("%d", &n);
    int a[n];
    int i = 0;
    for (i = 0; i < n; i++) {
        printf("\n Phần tử thứ %d ", i + 1);
        scanf("%d", &a[i]);
    }
    int j = 0;
    for (i = 0; i < n; i++) {
        for (j = i; j <= n - 1; j++) {
            if (a[i] >= a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    printf("\n Dãy sắp xếp theo thứ tự tăng dần là : ");
    for (i = 0; i < n; i++) {
        printf("  %d  ", a[i]);
    }
    printf("\n Dãy sắp xếp theo thứ tự giảm dần là : ");
    for (i = 0; i < n; i++) {
        printf("  %d  ", a[n-1-i]);
    }
    printf("\n  Dãy sắp xếp theo thứ tự giảm dần theo trị tuyệt đối là: ");
    for (i = 0; i < n; i++) {
        for (j = i + 1; j <= n - 1; j++) {
            if (abs(a[i]) > abs(a[j])) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("  %d  ", a[n-1-i]);
    }
    return 0;
}