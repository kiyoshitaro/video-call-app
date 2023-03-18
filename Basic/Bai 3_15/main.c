#include <math.h>
#include <stdio.h>

int main()
{
    printf("Nguyen Tuan  Hung       ;       MSSV : 20162031");
    printf("TInh Bieu thuc:");
    float epxilon;
    printf("\n nhap vao so epxilon ");
    scanf("%f",&epxilon);
    float tam=1;
    float tinh=1;
    float emu=exp(1);
    int i=2;
    while(fabs(emu-tinh)>epxilon)
    {
        tinh=tinh+tam;
        tam=tam/i;
        i++;
    }

    printf("\n theo cong thuc ta co e = %f",tinh);
    printf("\n theo ham ta co e = %f",emu);
    return 0;
}