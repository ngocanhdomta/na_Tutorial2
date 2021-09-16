#include<stdio.h>

//ham nhap mang
void nhapMang(int* a, int* n){
	printf("Nhap do lon cua mang: ");
	scanf("%d", n);
	int i;
	for(i = 0; i < *n; i++){
		printf("a[%d] =  ", i);
		scanf("%d", &a[i]);
	}
}

//ham xu ly du lieu
void xuly(int* a, int n){
	int i;
	int tong = 0;
	for(i = 0; i < n; i++){
		if(a[i] % 3 == 0 && a[i] % 5 != 0){
			tong += a[i];
		}
	}
	printf("Tong cac so chia het cho 3 ma khong chia het cho 5 la: %d", tong);
}

int main(){
	int a[100];
	int n;
	nhapMang(a, &n);
	xuly(a, n);
	
	return 0;
}


