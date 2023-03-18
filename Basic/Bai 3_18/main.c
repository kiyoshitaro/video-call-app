#include <stdio.h>
#include <math.h>

int main()
{
    printf("Nguyen Tuan  Hung       ;       MSSV : 20162031");
    printf("Tinh pi với độ chính xác epsilon nhập từ bàn phím");
    float epxilon;
    printf("\n nhap vao so epxilon ");
    scanf("%f",&epxilon);
    float tmp=1;
    float res=0;
    int i=1;
    while(i <= floor((1/epxilon-1)/2))
    {
        res=res+tmp;
        i=i+2;
        tmp=(tmp*-1)/i*(i-2);
    }
    res=res*4;
    printf("\n theo cong thuc ta co %f",res);
    return 0;
}



