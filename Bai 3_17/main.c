#include <math.h>
#include <stdio.h>

int main()
{
    printf("Nguyen Tuan  Hung       ;       MSSV : 20162031");
    printf("Giải và biện luận phương trình bậc 2");
    printf("\n nhap vao ba so a,b,c  ");
    float a,b,c;
    printf("\n Nhap vao so a : ");scanf("%f",&a);
    printf("\n Nhap vao so b : ");scanf("%f",&b);
    printf("\n Nhap vao so c : ");scanf("%f",&c);

    if(a==0)
    {
        if(b==0)
        {
            if(c==0)
            {
                printf("\n phuong trinh co nghiem x =0\n");
            }
            else
            {
                printf("phuong trinh vo nghiem\n");
            }
        }
    }
    else
    {
        float delta=b*b-4*a*c;
        if(delta==0)
        {
            printf("\n phuong trinh co nghiem kep x= %f\n",-b/(2*a));
        }
        if(delta<0)
        {
            printf("\n phuong trinh khong co nghiem thuc\n");
        }
        if(delta>0)
        {
            printf("\n nghiem x1 cua phuong trinh la  %f",(-b-sqrt(delta))/(2*a));
            printf("\n nghiem x2 cua phuong trinh la  %f\n",(-b+sqrt(delta))/(2*a));
        }

    }
    return 0;
}