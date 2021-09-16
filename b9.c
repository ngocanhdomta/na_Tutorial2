#include<stdio.h>

void nhap(float *r){
	do{
		printf("Nhap ban kinh hinh tron: ");
		scanf("%f", r);
		if(*r < 0){
			printf("Vui long nha lai!\n");
		}
	}while(*r < 0);
}

void tinhToan(float r, float *cv, float *dt){
	*cv = 2 * 3.14f * r;
	*dt = 3.14f * r * r;
}

int main(){
	float r; 	//ban kinh hinh tron
	nhap(&r);
	float chuVi, dienTich;
	tinhToan(r, &chuVi, &dienTich);
	printf("Chu vi: %0.3f, dien tich: %.3f\n", chuVi, dienTich);
	
	return 0;
}
