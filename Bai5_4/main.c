//5.4
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("\n Họ và tên : Nguyễn Tuấn Hưng");
    int a[20];int b[20];int c[20];int tam=0;int nho =0;
    printf("\n nhap vao so phan tu cho mang   ");
    int n;scanf("%d",&n);
    printf("\n nhap vao gia tri cua cac phan tu  ");int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0){b[tam]=a[i];tam++;}
        if(a[i]<0){c[nho]=a[i];nho++;}
    }
    printf("\n cac so nguyen duong la ");
    for(i=0;i<tam;i++)
    {
        printf("   %d",b[i]);
    }
    printf("\n cac so nguyen am la ");
    for(i=0;i<nho;i++)
    {
        printf("   %d",c[i]);
    }
    return 0;
}