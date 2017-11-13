#include <stdio.h>

int main() {
    int n, kq = 1;
    printf("\n Nhap vao n < 8: "); scanf("%d" , &n);
    for (int i =2 ; i<= n ; i++){
        kq = kq*i;
    }
    printf("%d! = %d", n, kq);
    return 0;
}