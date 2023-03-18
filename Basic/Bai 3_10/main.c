#include <stdio.h>

int gt(int x){
    int i,gt=1;
    for(i=1;i<=x;i++) gt*=i;
    return gt;
}

void main(){
    printf("Nguyen Tuan Hung    ;     MSSV : 20162031 \n");
    printf("In ra tam giác pascal \n");
    int n,i,j,C;
    do{
        printf("Nhap vao so duong be hon 10: ");
        scanf("%d",&n);
    }
    while(n>=10||n<1);
    for(i=0;i<n;i++){
        for(j=1;j<=n-i-1;j++) printf("  ");
        for(j=0;j<=i;j++){
            C=gt(i)/gt(j)/gt(i-j);
            printf("%4d",C);
        }
        printf("\n");
    }
}

