#include<stdio.h>
#include <string.h>
//char chuyen(int a)
//{
//    char b=(char)a+48;
//    return b;
//}
//void main() {
//    char a[20]=" ";
//    char b[20]=" ";
//    char bat[20]=" ";
//    int n,m;
//    printf("\n nhap vao so n");
//
//    scanf("%d",&n);
//    m=n;
//    int  i=0;
//    while(n!=0)
//    {
//        if(n%2==0)
//        {
//            a[i]='0';
//        }
//        else
//
//        {
//            a[i]='1';
//        }
//        i++;
//        n=n/2;
//    }
//    for(int j=0;j<i;j++)
//    {
//      b[j]=a[i-1-j];
//    }
//    printf("\n    %s",b);
//    printf("\n chuog trinh chuyen co so 8");
//    int dem=0;
//    while (m!=0)
//    {
//        char c=chuyen(n%8);
//        bat[dem]=c;
//        dem++;
//        m=m/8;
//    }
//    printf("\n %s",bat);
//    }

int main() {
    char ten[100];
    int tuoi;
    printf("Ban hay nhap tuoi cho sinh vien : \n");
    scanf("%d",&tuoi);
    printf("Ban hay nhap ten cho sinh vien : \n");
    fflush(stdin);
    gets(ten);
    printf("Thong tin sinh vien ban vua nhap la : \n");
    printf("Tuoi cua sinh vien : %d\n",tuoi);
    printf("Ten cua sinh vien : %s\n",ten);
    return 0;
}
