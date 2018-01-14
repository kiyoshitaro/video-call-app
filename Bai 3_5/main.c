#include <stdio.h>
void main()
{
    int n;
    printf("Nguyen Tuan Hung    ;     MSSV : 20162031 \n");
    printf("Luyện tập với lệnh switch \n");
    printf("Nhap vao so nguyen bat ki tu 0 den 9 :");
    scanf("%d",&n);
    switch(n)
    {
        case  0: printf ("\n  KHONG "); break ;
        case  1: printf ("\n  MOT "); break ;
        case  2: printf ("\n  HAI "); break ;
        case  3: printf ("\n  BA "); break ;
        case  4: printf ("\n  BON "); break ;
        case  5: printf ("\n  NAM "); break ;
        case  6: printf ("\n  SAU "); break ;
        case  7: printf ("\n  BAY "); break ;
        case  8: printf ("\n  TAM "); break ;
        case  9: printf ("\n  CHIN "); break ;
        default:  printf ("\n  SO KHONG HOP LE ");
    }
}