/*
#####################TUAN 1######################
#												#
# YEU CAU: NAM VUNG TOAN BO NHUNG KIEN THUC SAU #
#												#
#################################################

1. CAU TRUC CHUOWNG TRINH C
	#include <stdio.h>
	int main()
	{
		printf("Hello world \n");
		return 0;
	}
2. CAC KIEU DU LIEU NGUYEN THUY TRONG C
	- int: so nguyen
	- char: ky tu
	- float: so thuc
	- double: so thuc
3. DAC TA
	-%d: int
	-%c: char
	-%f: float
	-%lf: double
4. KHAI BAO BIEN
	- cu phap: kieu_du_lieu ten_bien [=gia_tri_khoi_tao]
	- khai bao bien a, b la kieu so nguyen: int a, b;
	- khai bao bien x, y la kieu so thuc va gan x = 2.5: float x = 2.5, y;
	- khai bao bien c la kieu char: char c;
	-luu y: cac dat ten bien: tenBien
5. KHAI BAO HANG
	- cu phap: const kieu_du_lieu TEN_HANG = GIA_TRI
	- khai bao hang so PI co gia tri bang 3.14: const float PI = 3.14.
	- luu y: cach dat ten hang: TEN_HANG
6. PRINTF
	- cu phap: printf("Noi dung in ra man hinh [dac ta]", ten bien hoac bt tuong ung voi dac ta)
	- Vi du: can in ra man hinh chu vi hinh tron voi bien chuVi
		 printf("Chu vu hinh tron %f", chuVi)
7. SCANF
	- cu phap: scanf("dac ta", &ten bien)
	- Vi du: can gan 2 so nguyen nhap tu ban phim cho a, b 
		 scanf("%d%d", &x, &b)
 	- luu y: Cau lenh Printf thuong di lien truoc cau lenhj scanf de "nhac" nguoi dung
8. CAC PHEP TOAN CONG TRU NHAN CHIA NGUYEN/DU
	Cho a, b la 2 so nguyen
	- tong = a + b
	- hieu = a - b
	- tich = a * b
	- chia lay nguyen = a/b
	- chia lay du = a%b
*/

//CHUOWNG TRINH MAU

#include <stdio.h>
int main()
{
	//khai bao hang so PI
	const float PI = 3.14;
	//khai bao bien c co kieu la char va gan bang 'A'
	char c = 'A'; 
	//khai bao a, b, tong, hieu, tich, chiaNguyen, chiaDu kieu so nguyen
	int a, b, tong, hieu, tich, chiaNguyen, chiaDu;
	//khai bao bien x kieu float
	float x;
	//khai bao bien y kieu double va gan y = 17.21
	double y = 17.21;

	//Nhap vao 2 so nguyen a va b, in ra ket qua tong, hieu, tich, chiaNguyen, chiaDu
	printf("Nhap vao so nguyen a:= ");
	scanf("%d", &a);
	printf("Nhap vao so nguyen b:= ");
	scanf("%d", &b);
	
	printf("---------------------------------------------\n\n");//2 dong moi
	tong = a + b;
	printf("Tong cua 2 so la: %d\n", tong);
	hieu = a - b;
	printf("Hieu cua 2 so la: %d\n", hieu);
	tich = a * b;
	printf("Tich cua 2 so la: %d\n", tich);
	chiaNguyen = a/b;
	printf("Chia nguyen cua 2 so la: %d\n", chiaNguyen);
	chiaDu = a%b;
	printf("Chia du cua 2 so la: %d\n", chiaDu);
	printf("---------------------------------------------\n\n");//2 dong moi
	
	//Nhap vao ban kinh x kieu float va in ra chu vi cua hinh tron
	printf("Nhap ban kinh (nhap so thuc) x = ");
	scanf("%f", &x);
	printf("Chu vi cua hinh tron la: %f\n", 2*x*PI);
	printf("---------------------------------------------\n\n");//2 dong moi

	//in ra man hinh bien c co kieu du lieu la char
	printf("Bien c co kieu du lieu char: %c\n", c);
	printf("---------------------------------------------\n\n");//2 dong moi
	
	//in man hinh bien y co kieu du lieu la double 
	printf("So thuc y co kieu double la: y = %lf\n", y);
	printf("**************************************\n\n");//2 dong moi
	
	return 0;
}
/*
				TEST DATA
	Nhap vao so nguyen a:= 75
	Nhap vao so nguyen b:= 17;
	---------------------------------------------
	
	Tong cua 2 so la: 92
	Hieu cua 2 so la: 58
	Tich cua 2 so la: 1275
	Chia nguyen cua 2 so la: 4
	Chia du cua 2 so la: 7
	---------------------------------------------
	
	Nhap ban kinh (nhap so thuc) x = 1.234
	Chu vi cua hinh tron la: 7.749520
	---------------------------------------------

	Bien c co kieu du lieu char: A
	---------------------------------------------
	
	So thuc y co kieu double la: 17.210000
	**************************************
*/
