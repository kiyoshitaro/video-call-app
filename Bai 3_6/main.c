#include <stdio.h>

int main() {
    int m , y;

    printf("\n Nhap vao nam :"); scanf("%d" , &y);
    printf("\n Nhap vao thang :"); scanf("%d" , &m);
    switch (m){
        case 1 : printf("Thang nay co 31 ngay"); break;
        case 2 :
            switch ((y%4  + (y%100 == 0))*(y%400)){
                case 0:printf("Thang nay co 29 ngay");break;
                default:printf("Thang nay co 28 ngay");break;
            }; break;
        case 3 : printf("Thang nay co 31 ngay");break;
        case 4 : printf("Thang nay co 30 ngay");break;
        case 5 : printf("Thang nay co 31 ngay");break;
        case 6 : printf("Thang nay co 30 ngay");break;
        case 7 : printf("Thang nay co 31 ngay");break;
        case 8 : printf("Thang nay co 31 ngay");break;
        case 9 : printf("Thang nay co 30 ngay");break;
        case 10 : printf("Thang nay co 31 ngay");break;
        case 11 : printf("Thang nay co 30 ngay");break;
        case 12 : printf("Thang nay co 31 ngay");break;
        default: printf("Khong co thang nay");break;
    }
    return 0;
}