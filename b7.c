#include<stdio.h>

void nhap(int* a, int* n, int *b){
	printf("Nhap do lon cua mang: ");
	scanf("%d", n);
	int i;
	for(i = 0; i < *n; i++){
		printf("a[%d] =  ", i);
		scanf("%d", &a[i]);
	}
	printf("Nhap thu tu: ");
	scanf("%d", b);
}

int timSoLon(int *a, int n, int b){
	int soTimDuoc;
	//sap xep mang theo thu tu giam dan
	int *a1 = a;
	int i, j;
	for(i = 0; i < n - 1; i++){
		for(j = n - 1; j > i; j--){
			if(a1[j] > a1[j - 1]){
				int tam = a1[j];
				a1[j] = a1[j - 1];
				a1[j - 1] = tam;
			}
		}
	}
	//tim so lon thu b
	printf("So lon thu %d la: %d\n", b, a1[b- 1]);
	
	return soTimDuoc;
}

int main(){
	int a[100];
	int n;
	int b; 		//tim so lon thu b trong mang
	nhap(a, &n, &b);
	timSoLon(a, n, b);
	
	return 0;
}
