// 5.8
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>
void nhapten(char ds[100], int n, int a[])
{
    printf("\n  nhap ten hoc sinh ");
    __fpurge(stdin);
    gets(ds);
    system("clear");
    a[n] = n;
    printf("\n Họ và tên : Nguyễn Tuấn Hưng \n MSSV: 20162031");
    printf("\n 1 bo sung danh sach");
    printf("\n 2 sap xep danh sach");
    printf("\n 3 in danh sach");
    printf("\n nhap phim bat ky con lai de thoat chuong trinh  ");
}
void crop_name(char hoten[],char ten[]){
    size_t i;
    for(i=strlen(hoten)-1;i>=0;i--){
        if(hoten[i]==' '){
            strcpy(ten,hoten+1+i);
            break;
        }
    }
}
void sort(char ds[10000][30],char ten[10000][10],int n,int a[])
{
    int i,j;
    for ( i =0 ; i< n; i++){
        crop_name(ds[i], ten[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j< n;j++)
        {
            if(strcmp(ten[i],ten[j])>0)
            {
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    printf("\n Đã sắp xếp xong tên theo abc");
}
void inten(char dslop[10000][30],int n,int a[])
{
    int j;
        for(j=0;j<n;j++)
        {
                printf("\n %s  %d ",dslop[a[j]],j+1 );
        }
}
int main()
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
    for (i = 0;i<100; i++) {

        int x;
        printf("\n chon mot chuc nang trong menu  ");
        scanf("%d", &x);
        if (x == 1) {
            nhapten(dslop[n],n ,a);
            n++;
            printf("%d", n);
        }
        else if (x == 2) { sort(dslop, ten, n, a); }
        else if (x == 3) { inten(dslop, n, a); }
    }
}