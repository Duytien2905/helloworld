#include <stdio.h>
int main(){
	int month,year;
	while (month <=0 || month>12 ||year<=0)
	{
		printf("Month: ");scanf("%d",&month);
		printf("Year: ");scanf("%d",&year);
	}
	switch (month)
	{
		case 1:
		{
			printf("Thang %d co 31 ngay.\n",month);
			break;
		}
		case 2:
		{
			if((year%4==0 && year%100!=0) || year%400==0){
				printf("Thang %d co 29 ngay.\n",month);
			}
			else printf("Thang %d co 28 ngay.\n",month);
			break;
		}
		case 3:{
			printf("Thang %d co 31 ngay.\n",month);
			break;
		}
		case 4:{
			printf("Thang %d co 30 ngay.\n",month);
			break;
		}
		case 5:{
			printf("Thang %d co 31 ngay.\n",month);
			break;
		}
		case 6:{
			printf("Thang %d co 30 ngay.\n",month);
			break;
		}
		case 7:{
			printf("Thang %d co 31 ngay.\n",month);
			break;
		}
		case 8:{
			printf("Thang %d co 31 ngay.\n",month);
			break;
		}
		case 9:{
			printf("Thang %d co 30 ngay.\n",month);
			break;
		}
		case 10:{
			printf("Thang %d co 31 ngay.\n",month);
			break;
		}
		case 11:{
			printf("Thang %d co 30 ngay.\n",month);
			break;
		}
		case 12:{
			printf("Thang %d co 31 ngay.\n",month);
			break;
		}
		default:
			break;
	}
	return 0;
}