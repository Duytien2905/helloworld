#include <stdio.h>
int main(){
int book;
printf("Nhap so quyen sach ma ban co: "); //Nhap so sach ban co
scanf("%d",&book);
printf("I have %d book%s\n",book, (book >1) ? "s" : "");
return 0;
}