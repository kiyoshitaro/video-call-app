#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio_ext.h>
#include <string.h>


// 5.1
float luythua(float x, int y) {
    float kq = 1;
    if (y > 0) {
        int i = 0;
        for (i = 0; i < y; i++) {
            kq = kq * x;
        }
        return kq;
    } else if (y < 0){
        y = -y;
        int i = 0;
        for (i = 0; i < y; i++) {
            kq = kq * x;
        }
        return 1 / kq;
    }
    else { return 1;}
}

//5.2
int giaithua(int n) {
    int kq = 1;
    int i = 1;
    for (i = 1; i <= n; i++) {
        kq = kq * i;
    }
    return kq;
}

//5.3
int giaithuacach(int n) {
    int kq = 1;
    int i = 1;
    printf("%d !! = 1", n);
    if (n % 2 == 0) {
        for (i = 1; i <= n; i++) { if (i % 2 == 0) { printf( "* %d" ,i);kq = kq * i; }}
    } else {
        for (i = 1; i <= n; i++) {
            printf("* %d", i);
            if (i % 2 == 1) { kq = kq * i; }
        }
    }
    printf("= %d", kq);
}

// 5.4
int nguyento(int n) {
    if (n <= 0) { return -1; }
    else {
        int i = 1;
        int dem = 0;
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                dem++;
            }
        }
        if (dem == 0) {
            return 1;
        } else { return 0; }
    }
}

// 5.5
int sohoanthien(int n) {
    if (n <= 0) { return -1; }
    else {
        int i = 1;
        int tong = 0;
        while (i < n) {
            if (n % i == 0) {
                tong = tong + i;
            }
            i++;
        }
        if (tong == n) {
            return 1;
        } else {
            return 0;
        }
    }
}

// 5.6
float dientich(float a, float b, float c) {
    float p = (a + b + c) / 2;
    float s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}

// 5.7
float chuvi(float a, float b, float c) {
    float p = (a + b + c);
    return p;
}

int fct(int x, int y) {
    int i;
    int ket_qua;
    if (y < 0) return (ket_qua = -1);
    ket_qua = 0;
    i = 0;
    while (i < y) {
        ket_qua = ket_qua + y;
        i += 2;
    }
    return ket_qua;
}

// 5.9 truyen vao mang va so phan tu mang sau do tim phan tu co gia tri lon nhat
float lonnhatmang(int n, float a[n]) {
    float ma = 0;
    int i = 1;
    for (i = 1; i <= n; i++) {
        if (a[i] > ma) {
            ma = a[i];
        }
    }
    return ma;
}

////5.10
//int vechuc(int n) {
//    int i = 1;
//    for (i = 1; i <= n; i++) {
//        printf("c");
//    }
//    return 0;
//}

//5.11
int tongchuso(int n) {
    int tong = 0;
    while (n != 0) {
        int tam = n % 10;
        tong = tong + tam;
        n = n / 10;
    }
    return tong;
}

// 5.12
void chen(int a[50], int k, int x, int n) {
    int i = 0;
    for (i = n; i > k + 1; i--) {
        a[i] = a[i - 1];
    }
    a[k + 1] = x;

}

//5.13
int tohop(int k, int n) {
    int c = giaithua(n) / (giaithua(k) * giaithua(n - k));
    return c;
}
//

//void nhapten(char a[30])
//{
//    printf("\n  nhap ten hoc sinh ");
//    __fpurge(stdin);
//    printf("\n nguyen huu trang mssv 20164197  \n");
//    printf("\n 1 bo sung danh sach");
//    printf("\n 2 sap xep danh sach");
//    printf("\n 3 in danh sach");
//    printf("\n nhap phim bat ky con lai de thoat chuong trinh  ");
//}
//void tachten(char hoten[],char ten[]){
//    int i;
//    for(i=strlen(hoten)-1;i>=0;i--){
//        if(hoten[i]==' '){
//            strcpy(ten,hoten+1+i);
//            break;
//        }
//    }
//}
//void sapxep(char ds[10000][30],char ten[10000][10],int n,int a[])
//{
//    int i,j;
//    for(i=0;i<=n;i++)
//    {
//        for(j=i;j<=n-1;j++)
//        {
//            if(strcmp(ten[i],ten[j])>0)
//            {
//                int tam=a[i];
//                a[i]=a[j];
//                a[j]=tam;
//            }
//        }
//    }
//    printf("\n da sap xep xong ten theo abc");
//}
//void inten(char dslop[10000][30],int n,int a[])
//{
//    int i,j;
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<n;j++)
//        {
//            if(a[j]==i)
//            {
//                printf("\n %s  %d ",dslop[j],j);
//            }
//        }
//    }
//}


int main() {
    char ck[2];
    int exe;
    do {
        printf("Bai 5_1 (Chương trình tính lũy thừa)--->          1\n");
        printf("Bai 5_2 (Chương trình tính giai thừa)--->         2\n");
        printf("Bai 5_3 (Chương trình tính giai thừa cách)--->    3\n");
        printf("Bai 5_4 (Chương trình kiểm tra số nguyên tố)--->  4\n");
        printf("Bai 5_5 (Chương trình kiểm tra số hoàn thiện)---> 5\n");
        printf("Bai 5_6_ (Chương trình tính diện tích)--->        6\n");
        printf("Bai 5_7 (Chương trình tính chu vi)--->            7\n");
        printf("Bai 5_8 (Chương trình tính fct)--->               8\n");
        printf("Bai 5_9 (Chương trình tìm phần tử lớn nhất trong mảng)--->  9\n");
        printf("Bai 5_10 (vẽ biểu đồ so sánh 8 giá trị)--->  10\n");
        printf("Bai 5_11 (Chương trình tính tổng chữ số)--->  11\n");
        printf("Bai 5_12 (chèn phần tử vào phía sau tất cả các phần tử có giá trị chẵn trong mảng)--->  12\n");
        printf("Bai 5_13 (Tính tổ hợp chập k của n)--->  13\n");
        printf("Bai 5_14 ( Chương trình đưa ra màn hình menu )--->  14\n");
        printf("Nhap mot bai :\n");
        scanf("%d", &exe);
        switch (exe) {
            case 1: {
                float res, x;
                int y;
                printf("\n Họ và tên : Nguyễn Tuấn Hưng");
                printf("\n Nhập số x :");
                scanf("%f", &x);
                printf("\n Nhập số y :");
                scanf("%d", &y);
                res = luythua(x, y);
                printf("%f \n", res);
                break;
            };

            case 2: {
                int n, res;
                printf("\n Họ và tên : Nguyễn Tuấn Hưng   MSSV : 20162031");
                printf("\n Nhập số n :");
                scanf("%d", &n);
                res = giaithua(n);
                printf("%d ! = %d  \n", n, res);
                break;
            }
            case 3: {
                int n, res;
                printf("\n Họ và tên : Nguyễn Tuấn Hưng   MSSV : 20162031");
                printf("\n Nhập số n :");
                scanf("%d", &n);
                res = giaithuacach(n);
                break;
            }

            case 4: {
                int n;
                printf("\n Họ và tên : Nguyễn Tuấn Hưng   MSSV : 20162031");
                printf("\n Nhập số n :");
                scanf("%d", &n);
                if (nguyento(n))
                    printf("%d là số nguyên tố \n", n);
                else {
                    printf("%d không là số nguyên tố \n", n);
                }
                break;
            }
            case 6 : {
                float res, x, y, z;
                printf("\n Họ và tên : Nguyễn Tuấn Hưng   MSSV : 20162031");
                printf("\n Nhập cạnh x :");
                scanf("%f", &x);
                printf("\n Nhập cạnh y :");
                scanf("%f", &y);
                printf("\n Nhập cạnh z :");
                scanf("%f", &z);
                res = dientich(x, y, z);
                printf("Diện tích tam giác là : %f \n", res);
                break;
            }

            case 5: {

                int n;
                printf("\n Họ và tên : Nguyễn Tuấn Hưng   MSSV : 20162031");
                printf("\n Nhập số n :");
                scanf("%d", &n);
                if (sohoanthien(n))
                    printf("%d là số hoàn thiện \n", n);
                else {
                    printf("%d không là số hoàn thiện \n", n);
                }
                break;
            }
            case 7: {
                float res, x, y, z;
                printf("\n Họ và tên : Nguyễn Tuấn Hưng   MSSV : 20162031");
                printf("\n Nhập cạnh x :");
                scanf("%f", &x);
                printf("\n Nhập cạnh y :");
                scanf("%f", &y);
                printf("\n Nhập cạnh z :");
                scanf("%f", &z);
                res = chuvi(x, y, z);
                printf("Chu vi tam giác là : %f \n", res);
                break;
            }
            case 8 : {
                int res, x, y;
                printf("\n Họ và tên : Nguyễn Tuấn Hưng   MSSV : 20162031");
                printf("\n Nhập  x :");
                scanf("%d", &x);
                printf("\n Nhập  y :");
                scanf("%d", &y);
                res = fct(x, y);
                printf("fct (%d , %d ) là %d \n", x, y, res);
                break;
            }
            case 9 : {
                int n;
                float res;

                printf("\n Họ và tên : Nguyễn Tuấn Hưng   MSSV : 20162031");
                printf("\n Nhập  số phần tử trong mảng :");
                scanf("%d", &n);
                float a[n];
                for (int i = 0; i < n; i++) {
                    printf("\n Nhập a[%d] =  ", i);
                    scanf("%f", &a[i]);
                }
                res = lonnhatmang(n, a);
                printf("Số lớn nhất trong mảng là : %f \n", res);
                break;
            }
            case 10 : {
                int a[8];
                char b[8][8], c[8][8];
                int i = 1, j= 0;
                for (i = 0; i < 8; i++) {
                    printf("Nhập các phần tử trong mảng \n");
                    printf("\n a[%d] = ", i);
                    scanf("%d", &a[i]);
                }
                printf("BIỂU ĐỒ : \n");
                for (i = 0; i < 8; i++) {
                    for (j =0; j< a[i]; j++){
                        b[i][j] = 'c';
                    }
                    for (j = a[i]; j < 8; j++){
                        b[i][j] = ' ';
                    }
                }
                for (i = 0; i < 8; i++) {
                    for (j =0; j< 8; j++){
                        c[7-j][i] = b[i][j];
                    }
                }
                for (i =0; i < 8; i++){
                    for (j =0; j < 8; j++) {
                        printf("%c", c[i][j]);
                    }
                    printf("\n");
                }

                break;
            }

            case 11 : {
                int n, res;

                printf("\n Họ và tên : Nguyễn Tuấn Hưng   MSSV : 20162031");
                printf("\n Nhập  số n :");
                scanf("%d", &n);
                res = tongchuso(n);
                printf("Tổng các chữ số của %d là : %d \n", n, res);
                break;
            }
            case 12 : {
                printf("\n Họ và tên : Nguyễn Tuấn Hưng   MSSV : 20162031");
                int a[50];
                int i = 0;
                int n;
                printf("\n Nhập vào số phần tử của mảng :");
                scanf("%d", &n);
                for (i = 0; i < n; i++) {
                    printf("a[%d] = ", i);
                    scanf("%d", &a[i]);
                }
                int x;
                printf("\n Nhập số muốn chèn");
                scanf("%d", &x);
                for (i = 0; i < n; i++) {
                    if (a[i] % 2 == 0) {
                        n++;
                        chen(a, i, x, n);
                    }
                }
                for (i = 0; i < n; i++) {
                    printf("\n %d  ", a[i]);
                }
            }
            case 13 : {
                printf("\n Họ và tên : Nguyễn Tuấn Hưng   MSSV : 20162031");
                int n;
                printf("\n Nhập số n: ");
                scanf("%d", &n);
                int k;
                printf("\n Nhập số k: ");
                scanf("%d", &k);
                printf("\n Tổ hợp chập %d của %d là : %d", k, n, tohop(k, n));
                break;
            }
            case 14 : {
                int n;
                int i = 1;
                for (i = 1;; i++) {
                    printf("\n Họ và tên : Nguyễn Tuấn Hưng   MSSV : 20162031");
                    printf("\n 1. kiem tra mot so co phai so nguyen to hay khong  ");
                    printf("\n 2. kiem tra mot so co phai  la so hoan thien hay khong  ");
                    printf("\n 3. thoat khoi chuong trinh.");
                    printf("\n");
                    int x;
                    scanf("%d", &x);
                    if (x == 1) {
                        system("clear");
                        printf("Nhập vào số cần kiểm tra :");
                        scanf("%d", &n);
                        if (nguyento(n))
                            printf("%d là số nguyên tố \n", n);
                        else {
                            printf("%d không là số nguyên tố \n", n);
                        }
                    } else if (x == 2) {
                        system("clear");
                        printf("Nhập vào số cần kiểm tra :");
                        scanf("%d", &n);
                        if (sohoanthien(n))
                            printf("%d là số hoàn thiện \n", n);
                        else {
                            printf("%d không là số hoàn thiện \n", n);
                        }
                    } else if (x == 3) {
                        printf("\n ban co thuc su muon thoat nhap C hoac c de thoat ");
                        printf("\n nhap mot trong cac phim con lai de tiep tuc chuong trinh  ");
                        char c;
                        __fpurge(stdin);
                        scanf("%c", &c);
                        if ((c == 'c') || (c == 'C')) {
                            exit(0);
                        } else {
                            system("clear");
                            continue;
                        }
                    }
                }
            }
            case 15 :
//            {
//                printf("\n nguyen huu trang mssv 20164197  \n");
//                printf("\n 1 bo sung danh sach");
//                printf("\n 2 sap xep danh sach");
//                printf("\n 3 in danh sach");
//                printf("\n nhap phim bat ky con lai de thoat chuong trinh  ");
//                int n=0;int i=0;
//                char dslop[10000][30];
//                char ten[10000][10];
//                int a[10000];
//                for(i=0;;i++)
//                {
//
//                    int x;printf("\n chon mot chuc nang trong menu  ");scanf("%d",&x);
//                    if(x==1){nhapten(dslop[n]);n++;}
//                    else if(x==2){sapxep(dslop,ten,n,a);}
//                    else if(x==3){inten(dslop,n,a);}
//                }
//                break;
//            }
            default:
                printf("\n  SO KHONG HOP LE ");
        }
        printf("\n\nChay lai chuong trinh? (C/K) ");
        __fpurge(stdin);
        scanf("%s", ck);
        system("clear");
    } while (ck[0] == 'c' || ck[0] == 'C');
}