#include <stdio.h>
#include <math.h>

int main() {
    double a[2], b[2], c[2];
    double x, y, z, S, P;
    printf("Nhập vào tọa độ đỉnh thứ nhất : \n");
    scanf("%lf %lf", &a[1], &a[2]);
    printf("Nhập vào tọa độ đỉnh thứ hai : \n");
    scanf("%lf %lf", &b[1], &b[2]);
    printf("Nhập vào tọa độ đỉnh thứ ba : \n");
    scanf("%lf %lf", &c[1], &c[2]);
    x = sqrt((a[1] - b[1]) * (a[1] - b[1]) + (a[2] - b[2]) * (a[2] - b[2]));
    y = sqrt((b[1] - c[1]) * (b[1] - c[1]) + (b[2] - c[2]) * (b[2] - c[2]));
    z = sqrt((c[1] - a[1]) * (c[1] - a[1]) + (c[2] - a[2]) * (c[2] - a[2]));
    if (x >= y + z || y >= x + z || z >= x + y) {
        printf("Đây không là tam giác. ");
        printf("\n Độ dài các cạnh là : %0.4lf %0.4lf %0.4lf", x, y, z);
    } else {
        if (x == y && y == z) {
            printf("Đây là tam giác đều\n");
        } else if (x == y || y == z || z == x) {
            printf("Đây là tam giác cân\n");
        } else if (x * x + y * y == z * z || x * x + z * z == y * y || y * y + z * z == x * x) {
            printf("Đây là tam giác vuông\n");
        } else {
            printf("Đây là tam giác thường \n");
        }
        P = x + y + z;
        S = sqrt((x + y + z) * (x + y - z) * (x + z - y) * (y + z - x)) / 4;
        printf("Diện tích tam giác là : %0.2lf \n", S);
        printf("Chu vi tam giác là : %0.2lf \n", P);
    }

    return 0;
}