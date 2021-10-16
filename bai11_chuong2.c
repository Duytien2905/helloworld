#include<stdio.h>
#include <math.h>
int main(){
int soNgay, soTuan,soNgayLe, Tien_Tra;
printf("Nhap so ngay thue khach san: ");
scanf("%d",&soNgay);
soTuan = soNgay/7;
soNgayLe = soNgay % 7;
	if (soNgay >= 7){
	Tien_Tra = soTuan*700000 + soNgayLe*120000;
	}
	else {
		Tien_Tra = soNgay*120000;
	}
	printf("So tien thue khach san phai tra la %d dong !\n",Tien_Tra);
return 0;
}