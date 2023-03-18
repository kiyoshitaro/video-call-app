#include <stdio.h>
void main()
{
    printf("\n Nguyễn Tuấn Hưng  \n   MSSV : 20162031 ");
    float a,b, max;
    printf("\n a= ");
    scanf("%f",&a);
    printf("\n b= ");
    scanf("%f",&b);
    max=a;
    if (max <b)  max = b;
    printf(" So lon nhat trong hai so la %6.2f",max);
}
