#include<stdio.h>

int main(){
	int a = 45;
	int b = 65;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	
	//cach 1: dung toan tu + & -
//	a = a + b;
//	b = a - b;
//	a = a - b;

	//cach 2: dung toan tu * & /
//	a = a * b;
//	b = a / b;
//	a = a / b;

	//cach 3: dung toan tu xor
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("Sau khi swap: \n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	
	return 0;
}
