#include<stdio.h>
int main(){
	float soDien, tienDien;
	int bac1 = 950, bac2 = 1250, bac3 = 1350, bac4 = 1550;
printf("Nhap vao so dien cua ban (kWh): ");
scanf("%f",&soDien);
if (soDien < 0){
	printf("Vui long nhap lai so dien.\n So dien khong duoc nho hon 0\n");
}
else if (soDien <= 100){
	tienDien = soDien * bac1;
}
else if (soDien <= 150){
	tienDien = 100*bac1 + (soDien - 50)*bac2;
}
else if (soDien <= 200){
	tienDien = 100*bac1 + 50*bac2 + (soDien - 150)*bac3;
}
else if (soDien > 200){
	tienDien = 100*bac1 + 50*bac2 + 50*bac3 + (soDien - 200)*bac4;
}
printf("so tien dien phai tra la: %.2f\n",tienDien);
return 0;	
}