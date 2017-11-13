#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include <time.h>


//      HINH VUONG
//int main() {
//    int n;
//    char ch[2], str[20] = "";
//    printf("\n Nhap vao so n < 20: "); scanf("%d" , &n);
//    printf("\n Nhap vao ki tu : "); scanf("%s" , ch);
//    for (int i =0; i< n; i++){
//        strcat(str,ch);
//    }
//    for(int i=0; i< n; i++) {
//        printf("\n %s", str);
//    }
//    return 0;
//}

//          TAM GIAC


// Cau 4
//int main(){
//    int n;
//    char* ch;
//    printf("Nhap vao so n < 20: "); scanf("%d",&n);
//    printf("\n Nhap vao ki tu: "); scanf("%s", ch);
//    for (int i =0 ; i < n; i++){
//        for (int j =0 ; j < i; j++){
//            printf(" ");
//        }
//        for (int j = i ; j< n ; j++){
//            printf("%s" , ch);
//        }
//        printf("\n");
//    }
//
//}



// Cau 5
//int main() {
//    int n;
//    char *ch;
//    printf("Nhap vao so n < 20: ");
//    scanf("%d", &n);
//    printf("\n Nhap vao ki tu: ");
//    scanf("%s", ch);
//    for (int i = 0; i < n; i++) {
//        for (int j = n; j >= i; j--) {
//            printf(" ");
//        }
//        for (int j = i; j >= 0; j--) {
//            printf("%s", ch);
//        }
//        printf("\n");
//    }
//}



//int main() {
//    int n;
//    char *ch;
//    printf("Nhap vao so n < 20: ");
//    scanf("%d", &n);
//    printf("\n Nhap vao ki tu: ");
//    scanf("%s", ch);
//    for (int i = 0; i < n; i++) {
//
//        for (int j = i; j >= 0; j--) {
//            printf("%s", ch);
//        }
//        for (int j = n; j >= i; j--) {
//            printf(" ");
//        }
//        printf("\n");
//    }
//}


//int main(){
//    int n;
//    char* ch;
//    printf("Nhap vao so n < 20: "); scanf("%d",&n);
//    printf("\n Nhap vao ki tu: "); scanf("%s", ch);
//    for (int i =0 ; i < n; i++){
//
//        for (int j = i ; j< n ; j++){
//            printf("%s" , ch);
//        }
//        for (int j =0 ; j < i; j++){
//            printf(" ");
//        }
//        printf("\n");
//    }
//
//}

//          CHONG CHONG

void wait ( int seconds )
{
    clock_t endwait;
    endwait = clock () + seconds * CLOCKS_PER_SEC ;
    while (clock() < endwait) {}
}

int main() {
    int n;
    char chf = 'a';
    char chs = 'b';
    char cht = 'c';
    char chfo = 'd';

    printf("Nhap vao so n < 20: ");
    scanf("%d", &n);
//    printf(" Nhap vao ki tu thu nhat: ");scanf("%s", chf);
//    printf(" Nhap vao ki tu thu hai: ");scanf("%s", chs);
//    printf(" Nhap vao ki tu thu ba: ");scanf("%s", cht);
//    printf(" Nhap vao ki tu thu tu: ");scanf("%s", chfo);
 for (int c =0 ;c < 100 ; c++)
{

    char tmp = chf;
    chf = chs; chs = cht ; cht = chf; chf =tmp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int j = 0; j < n - i; j++) {
            printf("%c", chf);
        }
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++) {
            printf("%c", chs);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("%c", cht);
        }
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        for (int j = 0; j < i + 1; j++) {
            printf("%c", chfo);
        }
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        printf("\n");
    }
    wait(1);
    system("clear");
}
}