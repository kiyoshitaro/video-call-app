#include <stdio.h>

int main() {
    float a[2][2], c[2], x, y;
    printf("Nhập a11 , a12, c1:");
    scanf("%f %f %f", &a[1][1], &a[1][2], &c[1]);
    printf("Nhập a21 , a22, c2:");
    scanf("%f %f %f", &a[2][1], &a[2][2], &c[2]);
    if (a[1][1] * a[2][2] == a[2][1] * a[1][2])
        (
                c[1] * a[2][1] == c[2] * a[1][1] ?
                printf("Hệ phương trình : \n %3.0f x + %3.0f y = %3.0f \n %f x + %3.0fy = %3.0f \n  vô số nghiệm", a[1][1],
                       a[1][2],
                       c[1], a[2][1], a[2][2], c[2])
                                                 :
                printf("Hệ phương trình : \n %3.0f x + %3.0f y = %3.0f \n %f x + %3.0fy = %3.0f \n  vô nghiệm", a[1][1],
                       a[1][2],
                       c[1], a[2][1], a[2][2], c[2])
        );
    else {
        y = (c[1] * a[2][1] - c[2] * a[1][1]) /
            (a[2][1] * a[1][2] - a[1][1] * a[2][2]);
        x = (c[1] - y * a[1][2]) / a[1][1];
        printf("Nghiệm của hệ phương trình : \n %3.0f x + %3.0f y = %3.0f \n %3.0f x + %3.0fy = %3.0f \n là:  %f và %f \n",
               a[1][1], a[1][2],
               c[1], a[2][1], a[2][2], c[2], x, y);
    }

    return 0;
}