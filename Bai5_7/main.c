// 5.7
#include <stdio.h>
#include <string.h>

int main()
{
    printf("\n Họ và tên : Nguyễn Tuấn Hưng \n MSSV: 20162031");
    char s1[30];
    char s2[30];
    printf("\n nhap vao xau s1  \n ");
    fflush(stdin);
    gets(s1);
    printf("\n nhap vao xau s2  \n ");
    fflush(stdin);
    gets(s2);
    printf("\n ket qua strcmp(s1,s2)  %d ",strcmp(s1,s2));
    printf("\n ket qua strcmp(s2,s1)  %d ",strcmp(s2,s1));
    strcpy(s1,s2);
    printf("\n ket qua strcpy(s1,s2)  %s  %s",s1,s2);

    return 0;
}