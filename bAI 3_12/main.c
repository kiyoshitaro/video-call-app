#include <stdio.h>

int main()
{
    printf("Nguyen Tuan Hung    ;    MSSV : 20162031");
    printf("In ra phần tử thứ n của dãy số Fibonaci");
    int n;
    printf("\n Nhap vao so n :  ");
    scanf("%d",&n);
    int tmp1,tmp2,tmp3;
    tmp1=1;
    tmp2=1;
    int i=2;

    while(i<=n)
    {
        tmp3=tmp1+tmp2;
        tmp1=tmp2;
        tmp2=tmp3;
        i++;
    }
    printf("So fibonaci thu %d la %d ",n,tmp3);
    return 0;
}




