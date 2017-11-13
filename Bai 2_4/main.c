#include <stdio.h>

int main() {
    float kq;
    char n[30] , *c;
    printf("\n Nhap ho va ten : ");
    gets(n);
    fflush(stdin);
    printf("\n Nhap ket qua : ");
    scanf("%f", &kq);
    if ( kq >= 9 ) { c = "Xuat sac" ;}
    else if (kq >= 8) {c = "Gioi";}
    else if (kq >= 6) {c = "Kha";}
    else if (kq >= 5) {c = "TB" ;}
    else {c = "Kem" ;}
    printf("|               Bang Ket Qua                           |\n");
    printf("|------------------------------------------------------|\n");
    printf("|             Ho va ten           |  Ket qua | Xep Loai|\n");
    printf("|------------------------------------------------------|\n");
    printf("|%-33s|%10.2f|%-9s|\n" , n , kq , c);
    printf("|------------------------------------------------------|\n");
}