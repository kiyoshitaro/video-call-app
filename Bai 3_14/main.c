
#include <stdio.h>

int main() {
    printf("Nguyen Tuan Hung      ;       MSSV : 20162031");
    printf("Kiểm tra xem số đó có phải số đó có phải là số nguyên hoàn thiện hạy không");
    int n;
    printf("\n nhap vao so nguyen can kiem tra   ");
    scanf("%d", &n);
    int i = 1;
    int tong = 0;
    while (i < n) {
        if (n % i == 0) {
            tong = tong + i;
        }
        i++;
    }
    if (tong == n) {
        printf("\n So nguyen vua nhap la so hoan thien");
    } else {
        printf("\n So nguyen vua nhap khong la so hoan thien");
    }

    return 0;
}