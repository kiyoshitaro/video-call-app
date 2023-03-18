#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159265


int main() {
    double x,y,z ,f;
    printf("\n x = "); scanf("%lf" , &x);
    printf("\n y = "); scanf("%lf" , &y);
    printf("\n z = "); scanf("%lf" , &z);
    f = (x+y+z)/(pow(x,2) + pow(y,2) + 1)-abs(x-z*cos(y)+cos(z)+x);
    printf("\n %lf" , f);
    return 0;
}
