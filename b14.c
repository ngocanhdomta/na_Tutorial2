#include<stdio.h>
#include<math.h>

//nhap vao so nguyen a, de xoa bit thu post va so bit xoa la len
void nhap(unsigned short int *a, int *post, int *len){
	do{
		printf("Nhap so nguyen duong: ");
		scanf("%d", a);
		printf("Xoa tu bit thu: ");
		scanf("%d", post);
		printf("So bit can xoa: ");
		scanf("%d", len);
		if(*a < 0 || *post < 0 || *len < 0) {
			printf("Vui long nhap lai!\n");
		}
	}while(*a < 0 || *post < 0 || *len < 0);
}

unsigned short int clear1Bit(unsigned short int a, int t){
	unsigned short int b = 0;
	//chuyen tu thap phan sang nhi phan
	int arr[16];
	int i = 0;
	while(a != 0){
		arr[i++] = a % 2;
		a /= 2;
	}
	int size = i;
	//xoa bit thu 't', trong do bit dau tien la bit thu 0
	arr[t] = 0;		//xoa bit thu t 
	//chuyen tu nhi phan sang thap phan
	for(i = 0; i < size; i++){
		b += (arr[i] * pow(2, i));
	}
	
	return b;
}

unsigned short int clearNhieuBit(unsigned short int a, int post, int len){
	unsigned short int b = 0;
	int arr[16];
	int i = 0;
	while(a != 0){
		arr[i++] = a % 2;
		a /= 2;
	}
	int size = i;
	
	for(i = post; i < post + len; i++){
		arr[i] = 0;
	}
	
	for(i = 0; i < size; i++){
		b += (arr[i] * pow(2, i));
	}
	
	return b;
}

int main(){
	unsigned short int a;		//so nguyen duong 16 bit
	int post, len;
	nhap(&a, &post, &len);
	
	int a1 = clearNhieuBit(a, post, len);
	printf("So sau khi xoa tu bit %d, so luong %d bit la: %d\n", post, len, a1);

	
	return 0;
}
