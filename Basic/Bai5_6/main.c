// 5.6
#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>
void crop_name(char hoten[],char ten[]){
    size_t i;
    for(i=strlen(hoten)-1;i>=0;i--){
        if(hoten[i]==' '){
            strcpy(ten,hoten+1+i);
            break;
        }
    }

}
int main() {
    printf("\n Họ và tên : Nguyễn Tuấn Hưng \n MSSV: 20162031");
    int n;
    int i = 0;
    printf("Nhập vào số học sinh của lớp: \n ");
    scanf("%d", &n);
    char dslop[100][30];
    char ten[100][10];
    int a[100];
    printf("\n Nhập vào tên các học sinh trong lớp: \n ");
    for (i = 0; i < n; i++) {
        __fpurge(stdin);
        gets(dslop[i]);
       crop_name(dslop[i], ten[i]);
        a[i] = i;
    }
    int j;
    for (i = 0; i < n; i++) {
        for (j = i+1 ; j < n; j++) {
            if (strcmp(ten[i], ten[j]) > 0) {
                int tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
    }
    printf("\nHọ và tên sau khi sắp xếp theo abc là : ");
    for (i = 0; i < n; i++) {
        printf("\n %-20s  %d", dslop[a[i]], i + 1);
    }
}