#include <stdio.h>

int main()
{
    int n;
    printf("\n nhap vao so nguyen can kiem tra   ");
    printf("\n Kiểm tra xem một số nguyên n có phải là số nguyên tố không ");
    scanf("%d",&n);
    int i=1;
    int dem=0;
    while(i<n)
    {
        if(n%i==0)
        {
            dem++;
        }
        i++;
    }
    if(dem>1)
    {
        printf("\n so nguyen vua nhap khong la so nguyen to");
    }
    else
    {
        printf("\n so nguyen vua nhap la so nguyen to");
    }

    return 0;
}