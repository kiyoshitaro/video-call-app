#include <math.h>
#include <stdio.h>


int main()
{
   printf("Nguyen Tuan Hung   ;     MSSV : 20162031\n");
   printf("Tính  tổng các số nguyên từ 1 đến 10\n");
   float x,epxi;
   printf("\n nhap vao x : ");    scanf("%f",&x);
   printf("\n nhap vao sai so epxi: ");    scanf("%f",&epxi);

   float s;
   float tmp=x;
   int i=1;
   double hs =sin(x);
   while(fabs(hs-s)>epxi)
   {
       i=i+2;
       s=s+tmp;
       tmp=tmp*x*x*(-1)/(i*(i-1));
   }
   printf("\n s la  %f", s);
   printf("\n theo ham sin  %f",hs);
   return 0;
}