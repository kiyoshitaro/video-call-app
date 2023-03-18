#include<stdio.h>

int main() {
    printf("Nguyen Tuan  Hung       ;       MSSV : 20162031");
    printf("Tinh f với độ chính xác epsilon ");
    float x, epxilon, a = 3, s, i = 1;
    int tmp = 1;
    printf("\n Nhap vao x :");
    scanf("%f", &x);
    printf("\n Nhap vao sai so epxilon :");
    scanf("%f", &epxilon);
    s = 1 - 3 * x;
    while (a > epxilon) {
        a = a * x * x * x / (2 * i + 1) * (2 * i + 3) / 3 / i / (3 * i + 1) / (3 * i - 1);
        i = i + 1;
        s = s + a * tmp;
        tmp = tmp * (-1);

    }
    printf("gia tri bieu thuc f la: %f", s);
    return 0;
}