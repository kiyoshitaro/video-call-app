#include <stdio.h>
#include <math.h>

int main() {
    printf("Họ và Tên : Nguyễn Tuấn Hưng ;  MSSV : 20162031");
    double a, b, c, S, P;
    printf("\n Nhap vao a :");
    scanf("%lf", &a);
    printf("\n Nhap vao b :");
    scanf("%lf", &b);
    printf("\n Nhap vao c :");
    scanf("%lf", &c);
    (a < b + c && b < a + c && c < a + b) ?
    printf("\n Chu vi cua tam giac la M = %0.2lf \n Dien ich cua tam giac la S = %0.2lf \n", a + b + c,
           sqrt((a + b + c) * (a + b - c) * (a + c - b) * (b + c - a)) / 4) :
    printf("Day khong phai la tam giac\n");
    return 0;
}