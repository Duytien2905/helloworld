#include <stdio.h>
#include <math.h>
int main(){
float C,F;
printf("Nhap nhiet do F= ");
scanf("%f",&F);
C = 5*(F-32)/9;
printf("Nhiet do sau khi duoc doi la: %.2f\n",C);
return 0;
}