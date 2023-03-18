#include <stdio.h>

int main() {
    printf("Nguyen Tuan Hung    ;     MSSV : 20162031 ");
    printf("Chương trình tính giai thừa của n");
    int n, kq = 1;
    printf("\n Nhap vao n < 8: "); scanf("%d" , &n);
    for (int i =2 ; i<= n ; i++){
        kq = kq*i;
    }
    printf("%d! = %d", n, kq);
    return 0;
}