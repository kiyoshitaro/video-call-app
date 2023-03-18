#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <memory.h>
#include <time.h>

int gt(int x) {
    int i, gt = 1;
    for (i = 0; i < x; i++) gt *= i;
    return gt;
}
void wait(int seconds) {
    clock_t endwait;
    endwait = clock() + seconds * CLOCKS_PER_SEC;
    while (clock() < endwait) {}
}
int main() {
    char ck[2];
    int exe;
    do
    {
    printf("Bai 3_5 --->  5\n");
    printf("Bai 3_6 --->  6\n");
    printf("Bai 3_8 --->  8\n");
    printf("Bai 3_9 [HINH_VUONG]--->  91\n");
    printf("Bai 3_9 [HINH_TAM_GIAC]--->  92\n");
    printf("Bai 3_9 [HINH_CHONG_CHONG_XOAY]--->  93\n");
    printf("Bai 3_10 ---> 10\n");
    printf("Bai 3_11 ---> 11\n");
    printf("Bai 3_12 ---> 12\n");
    printf("Bai 3_14 ---> 14\n");
    printf("Bai 3_15 ---> 15\n");
    printf("Bai 3_16 ---> 16\n");
    printf("Bai 3_17 ---> 17\n");
    printf("Bai 3_18 ---> 18\n");
    printf("Bai 3_19 ---> 19\n");
    printf("Bai 3_20 ---> 20\n");
    printf("Nhap mot bai :\n");
    scanf("%d", &exe);
    switch (exe) {
        case 5: {
            int n;
            printf("Nguyen Tuan Hung    ;     MSSV : 20162031 \n");
            printf("Luyện tập với lệnh switch \n");
            printf("Nhap vao so nguyen bat ki tu 0 den 9 :");
            scanf("%d", &n);
            switch (n) {
                case 0:
                    printf("\n  KHONG ");
                    break;
                case 1:
                    printf("\n  MOT ");
                    break;
                case 2:
                    printf("\n  HAI ");
                    break;
                case 3:
                    printf("\n  BA ");
                    break;
                case 4:
                    printf("\n  BON ");
                    break;
                case 5:
                    printf("\n  NAM ");
                    break;
                case 6:
                    printf("\n  SAU ");
                    break;
                case 7:
                    printf("\n  BAY ");
                    break;
                case 8:
                    printf("\n  TAM ");
                    break;
                case 9:
                    printf("\n  CHIN ");
                    break;
                default:
                    printf("\n  SO KHONG HOP LE ");
            }
            break;
        };

        case 6: {
            int m, y;
            printf("Nguyen Tuan Hung    ;     MSSV : 20162031 \n");
            printf("In ra số ngày của tháng thuộc năm đó \n");
            printf("\n Nhap vao nam :");
            scanf("%d", &y);
            printf("\n Nhap vao thang :");
            scanf("%d", &m);
            switch (m) {
                case 1 :
                    printf("Thang nay co 31 ngay");
                    break;
                case 2 :
                    switch ((y % 4 + (y % 100 == 0)) * (y % 400)) {
                        case 0:
                            printf("Thang nay co 29 ngay");
                            break;
                        default:
                            printf("Thang nay co 28 ngay");
                            break;
                    };
                    break;
                case 3 :
                    printf("Thang nay co 31 ngay");
                    break;
                case 4 :
                    printf("Thang nay co 30 ngay");
                    break;
                case 5 :
                    printf("Thang nay co 31 ngay");
                    break;
                case 6 :
                    printf("Thang nay co 30 ngay");
                    break;
                case 7 :
                    printf("Thang nay co 31 ngay");
                    break;
                case 8 :
                    printf("Thang nay co 31 ngay");
                    break;
                case 9 :
                    printf("Thang nay co 30 ngay");
                    break;
                case 10 :
                    printf("Thang nay co 31 ngay");
                    break;
                case 11 :
                    printf("Thang nay co 30 ngay");
                    break;
                case 12 :
                    printf("Thang nay co 31 ngay");
                    break;
                default:
                    printf("Khong co thang nay");
                    break;
            }
            break;
        };
        case 8: {
            printf("Nguyen Tuan Hung    ;     MSSV : 20162031 \n");
            printf("Chương trình tính giai thừa của n \n");
            int n, kq = 1;
            printf("\n Nhap vao n < 8: ");
            scanf("%d", &n);
            for (int i = 2; i <= n; i++) {
                kq = kq * i;
            }
            printf("%d! = %d", n, kq);
            break;
        }
        case 91: {
            printf("Ve Hinh Vuong \n");
            int n;
            char ch[2], str[20] = "";
            printf("\n Nhap vao so n < 20: ");
            scanf("%d", &n);
            printf("\n Nhap vao ki tu : ");
            scanf("%s", ch);
            for (int i = 0; i < n; i++) {
                strcat(str, ch);
            }
            for (int i = 0; i < n; i++) {
                printf("\n %s", str);
            }
            break;

        }
        case 92: {
            int n;
            char ch[1];
            printf("\n Ve Hinh Tam giac");
            printf("\nNhap vao so n < 20: ");
            scanf("%d", &n);
            printf("\n  Nhap vao ki tu: ");
            scanf("%s", ch);
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < i; j++) {
                    printf(" ");
                }
                for (int j = i; j < n; j++) {
                    printf("%s", ch);
                }
                printf("\n");
            }
            for (int i = 0; i < n; i++) {
                for (int j = n; j >= i; j--) {
                    printf(" ");
                }
                for (int j = i; j >= 0; j--) {
                    printf("%s", ch);
                }
                printf("\n");
            }
            for (int i = 0; i < n; i++) {

                for (int j = i; j >= 0; j--) {
                    printf("%s", ch);
                }
                for (int j = n; j >= i; j--) {
                    printf(" ");
                }
                printf("\n");
            }
            for (int i = 0; i < n; i++) {

                for (int j = i; j < n; j++) {
                    printf("%s", ch);
                }
                for (int j = 0; j < i; j++) {
                    printf(" ");
                }
                printf("\n");
            }
            break;
        }
        case 93: {


            printf("Ve Hinh chong chong \n");
            int n;
            char chf[1];
            char chs[1];
            char cht[1];
            char chfo[1];

            printf("\nNhap vao so n < 20: ");
            scanf("%d", &n);
            char tmp;
            printf(" \nNhap vao ki tu thu nhat: ");
            scanf("%s", chf);
            printf(" \nNhap vao ki tu thu hai: ");
            scanf("%s", chs);
            printf(" \nNhap vao ki tu thu ba: ");
            scanf("%s", cht);
            printf(" \nNhap vao ki tu thu tu: ");
            scanf("%s", chfo);
            printf(" \nNhap vao ki tu thu tu: ");
            for (int c = 0; c < 10; c++) {

                tmp = chf[0];
                chf[0] = chs[0];
                chs[0] = cht[0];
                cht[0] = chf[0];
                chf[0] = tmp;
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < i; j++) {
                        printf(" ");
                    }
                    for (int j = 0; j < n - i; j++) {
                        printf("%s", chf);
                    }
                    for (int j = 0; j < n - i - 1; j++) {
                        printf(" ");
                    }
                    for (int j = 0; j < i + 1; j++) {
                        printf("%s", chs);
                    }
                    printf("\n");
                }
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n - i; j++) {
                        printf("%s", cht);
                    }
                    for (int j = 0; j < i; j++) {
                        printf(" ");
                    }

                    for (int j = 0; j < i + 1; j++) {
                        printf("%s", chfo);
                    }
                    for (int j = 0; j < n - i - 1; j++) {
                        printf(" ");
                    }
                    printf("\n");
                }
                wait(1);
                system("clear");
            }

        }
        case 10: {

            printf("Nguyen Tuan Hung    ;     MSSV : 20162031 \n");
            printf("In ra tam giác pascal \n");
            int n, i, j, C;
            do {
                printf("Nhap vao so duong be hon 10: ");
                scanf("%d", &n);
            } while (n >= 10 || n < 1);
            for (i = 0; i < n; i++) {
                for (j = 1; j <= n - i - 1; j++) printf("  ");
                for (j = 0; j <= i; j++) {
                    C = gt(i) / gt(j) / gt(i - j);
                    printf("%4d", C);
                }
                printf("\n");
            }
            break;
        }

        case 11: {
            printf("Nguyen Tuan Hung   ;     MSSV : 20162031\n");
            printf("Tính  tổng các số nguyên từ 1 đến 10\n");
            float x, epxi;
            printf("\n nhap vao x : ");
            scanf("%f", &x);
            printf("\n nhap vao sai so epxi: ");
            scanf("%f", &epxi);

            float s;
            float tmp = x;
            int i = 1;
            double hs = sin(x);
            while (fabs(hs - s) > epxi) {
                i = i + 2;
                s = s + tmp;
                tmp = tmp * x * x * (-1) / (i * (i - 1));
            }
            printf("\n s la  %f", s);
            printf("\n theo ham sin  %f", hs);
            break;
        }
        case 12: {
            printf("Nguyen Tuan Hung    ;    MSSV : 20162031");
            printf("In ra phần tử thứ n của dãy số Fibonaci");
            int n;
            printf("\n Nhap vao so n :  ");
            scanf("%d", &n);
            int tmp1, tmp2, tmp3;
            tmp1 = 1;
            tmp2 = 1;
            int i = 2;

            while (i <= n) {
                tmp3 = tmp1 + tmp2;
                tmp1 = tmp2;
                tmp2 = tmp3;
                i++;
            }
            printf("So fibonaci thu %d la %d ", n, tmp3);
            break;
        }
        case 14: {
            printf("Nguyen Tuan Hung      ;       MSSV : 20162031\n");
            printf("Kiểm tra xem số đó có phải số đó có phải là số nguyên hoàn thiện hạy không\n");
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
            break;
        }
        case 15: {
            printf("Nguyen Tuan  Hung       ;       MSSV : 20162031\n");
            printf("TInh Bieu thuc:\n");
            float epxilon;
            printf("\n nhap vao so epxilon ");
            scanf("%f", &epxilon);
            float tam = 1;
            float tinh = 1;
            float emu = exp(1);
            int i = 2;
            while (fabs(emu - tinh) > epxilon) {
                tinh = tinh + tam;
                tam = tam / i;
                i++;
            }

            printf("\n theo cong thuc ta co e = %f", tinh);
            printf("\n theo ham ta co e = %f", emu);
            break;
        }
        case 16: {
            int n;
            printf("\n Kiểm tra xem một số nguyên n có phải là số nguyên tố không ");
            printf("\n nhap vao so nguyen can kiem tra  ");
            scanf("%d", &n);
            int i = 1;
            int dem = 0;
            while (i < n) {
                if (n % i == 0) {
                    dem++;
                }
                i++;
            }
            if (dem > 1) {
                printf("\n so nguyen vua nhap khong la so nguyen to");
            } else {
                printf("\n so nguyen vua nhap la so nguyen to");
            }
            break;
        }
        case 17: {
            printf("Nguyen Tuan  Hung       ;       MSSV : 20162031 \n");
            printf("Giải và biện luận phương trình bậc 2 \n");
            printf("\n nhap vao ba so a,b,c  ");
            float a, b, c;
            printf("\n Nhap vao so a : ");
            scanf("%f", &a);
            printf("\n Nhap vao so b : ");
            scanf("%f", &b);
            printf("\n Nhap vao so c : ");
            scanf("%f", &c);

            if (a == 0) {
                if (b == 0) {
                    if (c == 0) {
                        printf("\n phuong trinh co nghiem x =0\n");
                    } else {
                        printf("phuong trinh vo nghiem\n");
                    }
                }
            } else {
                float delta = b * b - 4 * a * c;
                if (delta == 0) {
                    printf("\n phuong trinh co nghiem kep x= %f\n", -b / (2 * a));
                }
                if (delta < 0) {
                    printf("\n phuong trinh khong co nghiem thuc\n");
                }
                if (delta > 0) {
                    printf("\n nghiem x1 cua phuong trinh la  %f", (-b - sqrt(delta)) / (2 * a));
                    printf("\n nghiem x2 cua phuong trinh la  %f\n", (-b + sqrt(delta)) / (2 * a));
                }

            }
            break;
        }
        case 18: {
            printf("Nguyen Tuan  Hung       ;       MSSV : 20162031 \n");
            printf("Tinh pi với độ chính xác epsilon nhập từ bàn phím \n");
            float epxilon;
            printf("\n nhap vao so epxilon ");
            scanf("%f", &epxilon);
            float tmp = 1;
            float res = 0;
            int i = 1;
            while (i <= floor((1 / epxilon - 1) / 2)) {
                res = res + tmp;
                i = i + 2;
                tmp = (tmp * -1) / i * (i - 2);
            }
            res = res * 4;
            printf("\n theo cong thuc ta co %f", res);
            break;
        }
        case 19: {
            printf("Nguyen Tuan  Hung       ;       MSSV : 20162031 \n");
            printf("Tinh f với độ chính xác epsilon \n");
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
            break;
        }
        case 20: {
            printf("Nguyen Tuan  Hung       ;       MSSV : 20162031 \n");
            printf("Tìm tất cả các bộ ba Pitago có các cạnh không quá 100 \n");
            int i, j, k;
            int dem = 0;
            for (i = 1; i < 100; i++) {
                for (j = i; j < 100; j++) {
                    for (k = i + 1; k < 100; k++) {
                        if (k * k == i * i + j * j) {
                            dem++;
                            printf("%d %d %d \n", i, j, k);
                        }
                    }
                }
            }
            printf("\n So tam giac la %d ", dem);
            break;
        }
        default:
            printf("\n  SO KHONG HOP LE ");
    }
    printf("\n\nChay lai chuong trinh? (C/K) ");
    fflush(stdin);
    scanf("%s", ck);
    system("clear");
}
    while(ck[0] == 'c' || ck[0] =='C' );
}