//#include <stdio.h>
//#include <string.h>
//
//int  sw(int a[],int n){
//    int i , j;
//    int n =14;
//    n = sizeof(a)/ sizeof(int);
//    for ( i =0 ; i< n ; i++){
//        for (j =i ; j<n ; j++){
//            if (a[i] < a[j]){
//                int tmp = a[i];
//                a[i] = a[j];
//                a[j] =  tmp;
//            }
//        }
//    }
//}
//
//int sum(int n){
//    if (n == 1){ return 1;}
//    else return n*n + sum(n-1);
//}
//int test(int a[20], int n){
//    for (int i =0; i< n; i++){
//        printf("%d  ",a[i]);
//    }
//}
//
//int main() {
//    printf("Hello, World!\n");
//    int a[] = {1,2,3,4,2,3,12,223,123,4,3,6,4,8};
//    int n = sizeof(a)/ sizeof(int);
//    sw(a,n);
//    for (int i =0 ; i< n ; i++ ){
//        printf("%d", a[i]);
//    }  ;
//    test(a,n);
//    printf("\n %d %d",sum(2),n);
//    return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//struct Books
//{
//    char  tieude[50];
//    char  tacgia[50];
//    char  chude[100];
//    int   id;
//};
//
//int main( )
//{
//    struct Books Book1;        /* Khai bao Book1 la cua kieu Book */
//    struct Books Book2;        /* Khai bao Book2 la cua kieu Book */
//
//    /* thong tin chi tiet quyen sach thu nhat */
//     Book1.tieude = "Lap trinh C"
//    strcpy( Book1.tacgia, "Pham Van At");
//    strcpy( Book1.chude, "Ngon ngu lap trinh C");
//    Book1.id = 1234567;
//
//    /* thong tin chi tiet quyen sach thu hai */
//    strcpy( Book2.tieude, "Toi thay hoa vang tren co xanh");
//    strcpy( Book2.tacgia, "Nguyen Nhat Anh");
//    strcpy( Book2.chude, "Van hoc");
//    Book2.id = 6677028;
//
//    /* hien thi thong tin Book1 */
//    printf( "Tieu de cua Book1 la: %s\n", Book1.tieude);
//    printf( "Tac gia cua Book1 la: %s\n", Book1.tacgia);
//    printf( "Chu de cua Book1 la: %s\n", Book1.chude);
//    printf( "ID cua Book1 la: %d\n", Book1.id);
//
//    /* hien thi thong tin Book2 */
//    printf( "Tieu de cua Book2 la: %s\n", Book2.tieude);
//    printf( "Tac gia cua Book2 la: %s\n", Book2.tacgia);
//    printf( "Chu de cua Book2 la: %s\n", Book2.chude);
//    printf( "ID cua Book2 la: %d\n", Book2.id);
//
//    printf("\n===========================\n");
//    printf("VietJain ck chuc cac ban hoc tot! \n");
//
//    return 0;
//}

#include <stdio.h>

main() {
int  b = 5;
   int  c , a;
    a = ++b;
    printf("%d hihi", a);
}