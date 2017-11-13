#include <stdio.h>

int main() {
    int m,n,p;
    float a[m][n] , b[n][p], c[m][p];
    printf ("Nhap m,n,p :");
    scanf ( "%d%d%d", &m,&n,&p);
    printf("Nhap ma tran a :");
    for (int i =0; i< m; i++)
    {
        printf("\n");
        for (int j = 0; j < n; j++) {
           scanf("%f", &a[i][j]);
        }
    }
    printf("Nhap ma tran b : ");
    for (int i =0; i< n; i++)
    {
        printf("\n");
        for (int j = 0; j < p; j++) {
           scanf("%f", &b[i][j]);
        }
    }
    for (int i =0; i< m; i++)
    {
        for (int j = 0; j < p; j++) {
           c[i][j] = 0;
            for (int k =0 ;k< p; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i =0; i< m; i++)
    {
        printf("\n");
        for (int j = 0; j < p; j++) {
            printf("%f", c[i][j]);
        }
    }

    return 0;
}