#include<stdio.h>

void nhap(float *a, float *b){
	do{
		printf("Nhap chieu dai HCN: ");
		scanf("%f", a);
		printf("Nhap chieu rong HCN: ");
		scanf("%f", b);
		if(*a <= 0 || *b <= 0){
			printf("Vui long nhap lai!\n");
		}
	}while(*a <= 0 || *b <= 0);
}

void tinhHCN(float a, float b){
	printf("Chu vi HCN: %0.3f\n", (a + b) * 2);
	printf("Dien tich HCN: %0.3f\n", a * b);
}

int main(){
	float a, b;		//hai canh cua hinh chu nhat
	nhap(&a, &b);
	tinhHCN(a, b);
	
	return 0;
}
