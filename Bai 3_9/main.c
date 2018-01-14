#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
//      HINH VUONG
int main() {
    printf("Ve Hinh Vuong \n");
    int n;
    char ch[2], str[20] = "";
    printf("\n Nhap vao so n < 20: "); scanf("%d" , &n);
    printf("\n Nhap vao ki tu : "); scanf("%s" , ch);
    for (int i =0; i< n; i++){
        strcat(str,ch);
    }
    for(int i=0; i< n; i++) {
        printf("\n %s", str);
    }
    return 0;
}





//#include <time.h>



//          TAM GIAC



//int main() {
//    int n;
//    char *ch;
//    printf("Ve Hinh Tam giac \n");
//    printf("Nhap vao so n < 20: ");
//    scanf("%d", &n);
//    printf("\n Nhap vao ki tu: ");
//    scanf("%s", ch);
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < i; j++) {
//            printf(" ");
//        }
//        for (int j = i; j < n; j++) {
//            printf("%s", ch);
//        }
//        printf("\n");
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = n; j >= i; j--) {
//            printf(" ");
//        }
//        for (int j = i; j >= 0; j--) {
//            printf("%s", ch);
//        }
//        printf("\n");
//    }
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
//    for (int i = 0; i < n; i++) {
//
//        for (int j = i; j < n; j++) {
//            printf("%s", ch);
//        }
//        for (int j = 0; j < i; j++) {
//            printf(" ");
//        }
//        printf("\n");
//    }
//}




//          CHONG CHONG

//void wait(int seconds) {
//    clock_t endwait;
//    endwait = clock() + seconds * CLOCKS_PER_SEC;
//    while (clock() < endwait) {}
//}
//
//int main() {
//    printf("Ve Hinh chong chong \n");
//    int n;
//    char *chf ;
//    char *chs ;
//    char *cht;
//    char *chfo ;
//
//    printf("Nhap vao so n < 20: ");
//    scanf("%d", &n);
//    char *tmp;
//    printf(" Nhap vao ki tu thu nhat: ");
//    scanf("%s", chf);
//    printf(" Nhap vao ki tu thu hai: ");
//    scanf("%s", chs);
//    printf(" Nhap vao ki tu thu ba: ");
//    scanf("%s", cht);
//    printf(" Nhap vao ki tu thu tu: ");
//    scanf("%s", chfo);
//    for (int c = 0; c < 10; c++) {
//
//        tmp = chf;
//        chf = chs;
//        chs = cht;
//        cht = chf;
//        chf = tmp;
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < i; j++) {
//                printf(" ");
//            }
//            for (int j = 0; j < n - i; j++) {
//                printf("%s", chf);
//            }
//            for (int j = 0; j < n - i - 1; j++) {
//                printf(" ");
//            }
//            for (int j = 0; j < i + 1; j++) {
//                printf("%s", chs);
//            }
//            printf("\n");
//        }
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n - i; j++) {
//                printf("%s", cht);
//            }
//            for (int j = 0; j < i; j++) {
//                printf(" ");
//            }
//
//            for (int j = 0; j < i + 1; j++) {
//                printf("%s", chfo);
//            }
//            for (int j = 0; j < n - i - 1; j++) {
//                printf(" ");
//            }
//            printf("\n");
//        }
//        wait(1);
//        system("clear");
//    }
//}