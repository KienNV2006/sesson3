#include <stdio.h>
int main(){
	float edge;
	float height;
	printf("moi ban nhap do dai canh cua hinh tam giac : ");
	scanf("%f", &edge);
	fflush(stdin);
	printf("moi ban nhap do dai chieu cao cua hinh tam giac :");
	scanf("%f", &height);
	fflush(stdin);
	float S = 0.5*edge*height;
	printf("dien tich cua hinh tam giac do la: %.2f\n", S);
	
}