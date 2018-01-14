#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include <stdio_ext.h>

typedef struct sv {
    char *hoten;
    int luong;
    char xl[30];
} sv;

sv *dslop;
int n = 0, c2 = 0, kt = 0;

void nhapds() {
    char s[31];
    printf(" Nhap ho ten can bo thu %d: ", n + 1);
    __fpurge(stdin);
    gets(s);
    if (strlen(s) == 0) {
        c2 = 1;
        kt = 1;
        return;
    } else kt = 0;
    n++;
    dslop = (sv *) realloc(dslop, (n + 1) * sizeof(sv));
    dslop[n].hoten = (char *) malloc(strlen(s) * sizeof(char));
    strcpy(dslop[n].hoten, s);
    printf(" Nhap luong: ");
    scanf("%d", &dslop[n].luong);
    int h = dslop[n].luong;
    strcpy(dslop[n].xl,
           h > 10 ? "Truong BM" : (h > 8 ? "Pho BM" : (h > 6 ? "Giang Vien" : (h > 4 ? "Giao Vu" : "Ko ro"))));
}

void them(int vt) {
    sv a;
    char s[31];
    printf(" Nhap ho ten can bo: ");
    __fpurge(stdin);
    gets(s);
    dslop = (sv *) realloc(dslop, (n + 1) * sizeof(sv));
    a.hoten = (char *) malloc(strlen(s) * sizeof(char));
    strcpy(a.hoten, s);
    printf(" Nhap luong: ");
    scanf("%d", &a.luong);
    int h = a.luong;
    strcpy(a.xl, h > 10 ? "Truong BM" : (h > 8 ? "Pho BM" : (h > 6 ? "Giang Vien" : (h > 4 ? "Giao Vu" : "Ko ro"))));
    if (vt >= 1 && vt <= n) {
        for (int i = n + 1; i > vt; i--)
            dslop[i] = dslop[i - 1];
        dslop[vt] = a;
        n++;
    } else
        printf("\nVi tri %d khong hop le.", vt);
}

void xoa(int vt) {
    for (int i = vt; i <= n - 1; i++)
        dslop[i] = dslop[i + 1];
    n--;
}

int vitri(char s[31]) {
    int l;
    l = strlen(s);
    while (s[l] == ' ') l--;
    while (s[l] != ' ' && l > -1) l--;
    return ++l;
}

int check(sv a, sv b) {
    if (strcmp(a.hoten + vitri(a.hoten), b.hoten + vitri(b.hoten)) == -1) return 1;
    else if (strcmp(a.hoten + vitri(a.hoten), b.hoten + vitri(b.hoten)) == 0 && strcmp(a.hoten, b.hoten) == -1)
        return 1;
    else if (strcmp(a.hoten + vitri(a.hoten), b.hoten + vitri(b.hoten)) == 0 && strcmp(a.hoten, b.hoten) == 0 &&
             a.luong < b.luong)
        return 1;
    else return 0;
}

void sapxep(int l, int h) {
    if (l >= h) return;
    int i, j;
    sv pivot;
    i = l + rand() % (h - l + 1);
    pivot = dslop[i];
    dslop[i] = dslop[l];
    i = l;
    j = h;
    while (i < j) {
        while (i < j && check(pivot, dslop[j])) j--;
        if (i < j) {
            dslop[i] = dslop[j];
            i++;
        } else break;

        while (i < j && check(dslop[i], pivot)) i++;
        if (i < j) {
            dslop[j] = dslop[i];
            j--;
        } else break;
    }
    dslop[i] = pivot;
    sapxep(l, i - 1);
    sapxep(i + 1, h);
}

void inds() {
    int i;

    if (n != 0) {
        printf("------------------------------------------");
        printf("\n|       Ho va ten    | Luong |  Chuc Vu  |");
        printf("\n|----------------------------------------|");
        for (i = 1; i <= n; i++) {
            printf("\n|%-20s|%7.d|%11s|", dslop[i].hoten, dslop[i].luong, dslop[i].xl);
            printf("\n|----------------------------------------|");
        }
        printf("\n");
    } else printf(" Chua co hoc sinh nao\n");

}

int main() {


    n = 0;
    char ch1, ch2;
    printf(" 1: Nhap danh sach");
    printf("\n 2: Sap xep");
    printf("\n 3: In danh sach");
    printf("\n 4: Xoa");
    printf("\n 5: Them");
    printf("\n 6: Thoat\n");
    while (n < 10000) {
        printf(" Nhan phim so de chon: ");
        fflush(stdin);
        scanf("%c", &ch1);
        if (ch1 == '1') {
            do {
                nhapds();
            } while (!kt);
        } else if (ch1 == '2') sapxep(1, n);
        else if (ch1 == '3') inds();
        else if (ch1 == '4') {
            int vt2;
            printf("\nnhap vao vi tri: ");
            scanf("%d", &vt2);
            xoa(vt2);
        } else if (ch1 == '5') {
            int vt;
            printf("\nnhap vi tri: ");
            scanf("%d", &vt);
            them(vt);
        } else if (ch1 == '6') {
            printf(" Ban muon ket thuc Y/N: ");
            fflush(stdin);
            scanf("%c", &ch2);
            if (ch2 == 'Y' || ch2 == 'y') break;
        }
    }
}