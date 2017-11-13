#include <stdio.h>

int main() {
    char *x, *y;
    printf("Say st : \n");
    gets(x);
    printf("Say st else : \n");
    gets(y);
    if (x == y){
        printf("similar\n");
    }
    else printf("Different\n");
    return 0;
}