#include <stdio.h>

int main() {
    printf("Nguyen Tuan  Hung       ;       MSSV : 20162031");
    printf("Tìm tất cả các bộ ba Pitago có các cạnh không quá 100");
    int i, j, k;
    int dem = 0;
    for (i = 1; i < 100; i++) {
        for (j = i ; j < 100; j++) {
            for (k = i + 1; k < 100; k++) {
                if (k * k == i * i + j * j) {
                    dem++;
                    printf("%d %d %d \n" , i ,j ,k  );
                }
            }
        }
    }
    printf("\n So tam giac la %d ", dem);
    return 0;
}