#include<stdio.h>

int main(){
	int number;
	int reserved=0;

	do{
		printf("Nhap vao so nguyen co 4 chu so :");
		scanf("%d",&number);
		if(number<1000||number>9999) printf("So khong hop le !\n");
	}while(number<1000||number>9999);
	while(number>0){
		reserved=reserved*10+number%10;
		number/=10;	
	}
	printf("So dao nguoc la :%d",reserved);
}