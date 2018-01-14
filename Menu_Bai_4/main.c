#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <stdio_ext.h>

void tachten(char hoten[],char ten[]){
    int i;
    for(i=strlen(hoten)-1;i>=0;i--){
        if(hoten[i]==' '){
            strcpy(ten,hoten+1+i);
            break;
        }
    }
}
void nhapten(char a[30])
{
    printf("\n  nhap ten hoc sinh ");
    __fpurge(stdin);
    gets(a);
    system("clear");
    printf("\n Nguyễn Tuấn Hưng mssv 20162031\n");
    printf("\n 1 bo sung danh sach");
    printf("\n 2 sap xep danh sach");
    printf("\n 3 in danh sach");
    printf("\n nhap phim bat ky con lai de thoat chuong trinh  ");
}
void sapxep(char ds[10000][30],char ten[10000][10],int n,int a[])
{
    int i,j;
    for (i = 0; i < n; i++) {
        for (j = i ; j < n; j++) {
            if (strcmp(ten[i], ten[j]) > 0) {
                int tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
    }
    printf("\n Đã sắp xếp xong tên theo abc");
}
void inten(char dslop[10000][30],int n,int a[])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]==i)
            {
                printf("\n %s  %d ",dslop[j],j);
            }
        }
    }
}
int main() {
    char ck[2];
    int exe;
    do
    {
        printf("Bai 5_2 (Chương trình nhập mảng)--->  2\n");
        printf("Bai 5_3 (Giải hệ phương trình)--->  3\n");
        printf("Bai 5_4 (Chương trình thao tác trên mảng)--->  4\n");
        printf("Bai 5_5 (Chương trình nhâp tên sinh viên và in ra)--->  5\n");
        printf("Bai 5_6 (Danh sách sinh viên)--->  6\n");
        printf("Bai 5_7 (Thao tác với chuỗi)--->  7\n");
        printf("Bai 5_8 (Mở rộng bài 6)--->  8\n");
        printf("Nhap mot bai :\n");
        scanf("%d", &exe);
        switch (exe) {
            case 2: {
                printf("\n Họ và tên : Nguyễn Tuấn Hưng");
                printf("\n Nhập số phần tử :");
                int n;
                scanf("%d", &n);
                int a[n];
                int i = 0;
                for (i = 0; i < n; i++) {
                    printf("\n Phần tử thứ %d ", i + 1);
                    scanf("%d", &a[i]);
                }
                int j = 0;
                for (i = 0; i < n; i++) {
                    for (j = i; j <= n - 1; j++) {
                        if (a[i] >= a[j]) {
                            int tam = a[i];
                            a[i] = a[j];
                            a[j] = tam;
                        }
                    }
                }
                printf("\n Dãy sắp xếp theo thứ tự tăng dần là : ");
                for (i = 0; i < n; i++) {
                    printf("  %d  ", a[i]);
                }
                printf("\n  Dãy sắp xếp theo thứ tự tăng dần theo trị tuyệt đối là: ");
                for (i = 0; i <= n; i++) {
                    for (j = i + 1; j <= n - 1; j++) {
                        if (abs(a[i]) > abs(a[j])) {
                            int tam = a[i];
                            a[i] = a[j];
                            a[j] = tam;
                        }
                    }
                }
                for (i = 0; i < n; i++) {
                    printf("  %d  ", a[i]);
                }
                break;
            };


            case 3: {
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
                break;
            }

            case 4: {
                printf("\n Họ và tên : Nguyễn Tuấn Hưng");
                int a[20];
                int b[20];
                int c[20];
                int tam = 0;
                int nho = 0;
                printf("\n Nhập vào số phần tử của mảng: ");
                int n;
                scanf("%d", &n);
                printf("\n Nhập vào giá trị các phần tử: ");
                int i = 0;
                for (i = 0; i < n; i++) {
                    scanf("%d", &a[i]);
                    if (a[i] > 0) {
                        b[tam] = a[i];
                        tam++;
                    }
                    if (a[i] < 0) {
                        c[nho] = a[i];
                        nho++;
                    }
                }
                printf("\n Các số nguyen dương là: ");
                for (i = 0; i < tam; i++) {
                    printf("   %d", b[i]);
                }
                if (nho != 0) {
                    printf("\n Các số nguyên âm là: ");

                    for (i = 0; i < nho; i++) {
                        printf("   %d", c[i]);
                    }
                } else {
                    printf("\n Không có số nguyên âm");
                }
                break;
            }
            case 5: {
                printf("\n Họ và tên : Nguyễn Tuấn Hưng \n MSSV: 20162031");
                char c[30];
                printf("\n Nhập vào tên sinh viên \n");
                __fpurge(stdin);
                gets(c);
                printf("\n DEV-C xin chào bạn: %s", c);
                break;
            }

            case 6: {

                {
                    printf("\n Họ và tên : Nguyễn Tuấn Hưng \n MSSV: 20162031");
                    int n;
                    int i = 0;
                    printf("Nhập vào số học sinh của lớp: \n ");
                    scanf("%d", &n);
                    char dslop[100][30];
                    char ten[100][10];
                    int a[100];
                    printf("\n Nhập vào tên các học sinh trong lớp: \n ");
                    for (i = 0; i < n; i++) {
                        __fpurge(stdin);
                        gets(dslop[i]);
                        tachten(dslop[i], ten[i]);
                        a[i] = i;
                    }
                    int j;
                    for (i = 0; i < n; i++) {
                        for (j = i ; j < n; j++) {
                            if (strcmp(ten[i], ten[j]) > 0) {
                                int tam = a[i];
                                a[i] = a[j];
                                a[j] = tam;
                            }
                        }
                    }
                    printf("\nHọ và tên sau khi sắp xếp theo abc là : ");
                    for (i = 0; i < n; i++) {
                        printf("\n %-20s  %d ", dslop[a[i]], i + 1);
                    }
                    break;
                }
                case 7: {
                    printf("\n Họ và tên : Nguyễn Tuấn Hưng \n MSSV: 20162031");
                    char s1[30];
                    char s2[30];
                    printf("\n Nhập vào xâu s1:");
                    __fpurge(stdin);
                    gets(s1);
                    printf("\n Nhập vào xâu s2:");
                    __fpurge(stdin);
                    gets(s2);
                    printf("\n Kết quả strcmp(s1,s2)  %d ", strcmp(s1, s2));
                    printf("\n Ktế quả strcmp(s2,s1)  %d ", strcmp(s2, s1));
                    strcpy(s1, s2);
                    printf("\n Kết quả strcpy(s1,s2)  %s  %s", s1, s2);
                }
                break;
            }
            case 8 : {
                {
                    printf("\n Nguyễn Tuấn Hưng mssv 20162031  \n");
                    printf("\n 1 Bổ sung danh sach");
                    printf("\n 2 sap xep danh sach");
                    printf("\n 3 in danh sach");
                    printf("\n nhap phim bat ky con lai de thoat chuong trinh  ");
                    int n = 0;
                    int i = 0;
                    char dslop[10000][30];
                    char ten[10000][10];
                    int a[10000];
                    for (i = 0;; i++) {

                        int x;
                        printf("\n chon mot chuc nang trong menu  ");
                        scanf("%d", &x);
                        if (x == 1) {
                            nhapten(dslop[n]);
                            n++;
                        }
                        else if (x == 2) { sapxep(dslop, ten, n, a); }
                        else if (x == 3) { inten(dslop, n, a); }
                    }
                }
                default:
                    printf("\n  SO KHONG HOP LE ");
            }
                break;
        }
        printf("\n\nChay lai chuong trinh? (C/K) ");
        __fpurge(stdin);
        scanf("%s", ck);
        system("clear");
    }
    while(ck[0] == 'c' || ck[0] =='C' );
}