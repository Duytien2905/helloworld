#include <stdio.h>
#include <math.h>
int main(){
int a,b,c;
float D, x1,x2,x;
printf("Nhap a, b, c: ");
scanf("%d%d%d",&a,&b,&c);
if (a == 0) {
	printf("Yeu cau khong dam bao");
}
else {
	D = (pow(b,2)-4*a*c);
	if (D > 0){
		x1 = (((-b + sqrt(D)))/2*a);
		x2 = (((-b - sqrt(D)))/2*a);
		printf("Phuong trinh co 2 nghiem phan biet x1= %.2f, x2= %.2f\n",x1,x2);
	}
	else if (D == 0) {
		x = ((-b)/2*a);
		printf("Phuong trinh co nghiem kep x= %.2f\n",x);
	}
	else printf("Phuong trinh vo nghiem !\n");
}
return 0;
}